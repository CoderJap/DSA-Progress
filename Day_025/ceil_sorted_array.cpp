// User function Template for C++
class Solution {
  public:
    int findCeil(vector<int>& arr, int x) {
        int ans = -1;
        for(int i=0;i<arr.size();i++){
            if( arr[i] >= x){
                ans = i;
                break;
            }
        }
        
        return ans;
        
    }
};