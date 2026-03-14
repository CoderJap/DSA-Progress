class Solution {
  public:
  
    int findPivot(vector<int>&arr){ // this is linear search so n complexity
        int n = arr.size();
        
        for(int i=0;i<n-1;i++){
            if(arr[i]>arr[i+1]){
                return i;
            }
        }
        return n-1;
    }
    bool pairInSortedRotated(vector<int>& arr, int target) {
        int n = arr.size();
        
        int pivot = findPivot(arr);
        
        int left = (pivot + 1)%n ;
        int right = pivot;
        
        
        while(left!=right){
            int sum = arr[left]+ arr[right];
            
            if(sum < target){ // move left forward
                left = (left+1)%n;
            }
            
            else if(sum == target){
                return true;
            }
            
            else { // move right backward
                right = (right- 1 + n)%n;
            }
        }
        return false;
        
    }
};

