class Solution {
public: 

    void reverse(vector<int>&nums , int s , int e ){
        while(s<e){
            swap(nums[s],nums[e]);
            s++;
            e--;
        }
    }
    void nextPermutation(vector<int>& nums) {

        int n = nums.size();
        int breakpoint=-1;

        // find break point 
        for(int i=n-2;i>=0;i--){
            if(nums[i]<nums[i+1]){
                breakpoint=i;
                break;
            }
        }

        if(breakpoint == -1 ){ // no breakpoint

        reverse(nums,0,n-1);

        }

        else{ //breakpoint exists

        for(int i=n-1;i>breakpoint;i--){
            if(nums[i]>nums[breakpoint]){
                swap(nums[i],nums[breakpoint]);
                break;
            }
        }

        reverse(nums,breakpoint+1,n-1);

        }


    }
};