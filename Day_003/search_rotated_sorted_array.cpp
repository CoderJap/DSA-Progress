class Solution {
public:
    int binarySearch(vector<int>&nums , int s , int e , int target){
        int n = nums.size();

        while(s<=e){
            int mid = s + (e - s)/2;

            if(nums[mid] > target){
                e = mid-1;
            }

            else if(nums[mid] == target){
                return mid;
            }

            else{
                s = mid+1;
            }
        }
        return -1;
    }

    int getPivot(vector<int>&nums){
        int n = nums.size();

        for(int i=0;i<n-1;i++){
            if(nums[i]>nums[i+1]){
                return i;
            }
        }
        return n-1;
    }

    int search(vector<int>& nums, int target) {

        int pivot = getPivot(nums);
        int n = nums.size();

        if(target >= nums[0] && target <= nums[pivot]){
            return binarySearch(nums,0,pivot,target);
        }
        else {
            return binarySearch(nums,pivot+1,n-1,target);
        }
    }
};