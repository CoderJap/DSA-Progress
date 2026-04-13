/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     ListNode *next;
 *     ListNode() : val(0), next(nullptr) {}
 *     ListNode(int x) : val(x), next(nullptr) {}
 *     ListNode(int x, ListNode *next) : val(x), next(next) {}
 * };
 */
class Solution {
public:
    ListNode* reverse(ListNode* head) {
        ListNode* prev = NULL;
        ListNode* curr = head;
        
        while(curr) {
            ListNode* next = curr->next;
            curr->next = prev;
            prev = curr;
            curr = next;
        }
        return prev;
    } 

    ListNode* removeNthFromEnd(ListNode* head, int n) {

        // // edge case (n=1) handling  not optimal as 3 passes 

        // head = reverse(head);

        // if(n == 1){
        //     ListNode* temp = head;
        //     head = head -> next;
        //     delete temp;
        //     return reverse(head);
        // }

        // ListNode* curr = head;

        // for(int i=1;i<n-1;i++){
        //     curr = curr -> next;
        // }

        // ListNode* temp = curr -> next;
        // curr -> next = curr -> next -> next;
        // delete temp;

        // return reverse(head);



        // optimal is fast and slow approach where we will at start give fast
        // headstart of n steps and then both will move together and then when they
        //  will meet each other at node before the target(prev).


        ListNode* fast = head;
        ListNode* slow = head;

        // give fast n steps ahead
        for(int i=0;i<n;i++){
            fast = fast -> next;
        }

        // if deleting head
        if(fast == NULL){
            ListNode* temp = head;
            head = head -> next;
            delete temp;
            return head;
        }

        // move both together 
        while(fast -> next != NULL){
            fast = fast -> next;
            slow = slow -> next;

        }

        ListNode* temp = slow -> next;
        slow -> next = slow -> next -> next;
        delete temp;
        return head;





    
    }
};