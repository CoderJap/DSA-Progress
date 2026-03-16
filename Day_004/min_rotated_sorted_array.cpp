class Solution {
public:

    int findMin(vector<int>& nums) {

        int s = 0;
        int e = nums.size() - 1;

        while(s<e){
            int mid = s + (e-s)/2;

            if(nums[mid]>nums[e]){ // min lies in right half

            s = mid+1;

            }

            else{ // min lies in left half including mid

            e=mid;

            }
        }
        return nums[s];
    }
};