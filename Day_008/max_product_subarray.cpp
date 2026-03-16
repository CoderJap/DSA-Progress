class Solution {
public:
    int maxProduct(vector<int>& nums) {

        int minCurr = nums[0];
        int maxCurr = nums[0];
        int ans = nums[0];

        int n = nums.size();

        for(int i=1; i<n; i++){
            
            int temp = maxCurr;

            maxCurr = max({nums[i] , nums[i]*maxCurr , nums[i]*minCurr});
            minCurr = min({nums[i] , nums[i]*temp ,nums[i]*minCurr});

            ans = max(ans , maxCurr);
        }

        return ans;
    }
};