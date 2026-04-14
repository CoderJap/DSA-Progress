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

    void reorderList(ListNode* head) {

        if(!head || !head->next ) return ;

        // 1. middle find 
        ListNode* fast = head;
        ListNode* slow = head;

        while(fast -> next && fast -> next -> next){
            slow = slow -> next;
            fast = fast -> next-> next;
        }

        // 2. reverse the second half 
        ListNode* second = slow -> next;
        slow -> next = NULL;

        ListNode* prev = reverse(second);

        // 3. merge 

        ListNode* first = head;
        second = prev;

        while(second){
            ListNode* temp1 = first -> next;
            ListNode* temp2 = second -> next;

            first -> next = second;
            second -> next = temp1;

            first = temp1;
            second = temp2;
            
        }

        
    }
};