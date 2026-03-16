class Solution {
  public:
    int kthSmallest(vector<int> &arr, int k) {
        
        priority_queue<int, vector<int>, greater<int>> minHeap;
        
        // insert elements 
        for(int i=0;i<arr.size();i++){
            minHeap.push(arr[i]);
        }
        
        for(int i=0;i<k-1;i++){
            minHeap.pop();
        }
        
        return minHeap.top();

    }
};