class Solution {
public:
    int minFlips(string s) {

        int n = s.length();

        string s2 = s + s;

        string alt1 ="" , alt2 ="";

        // build alternating patterns 
        for(int i=0;i<2*n;i++){
            if(i % 2 == 0){
                alt1 +='0';
                alt2 +='1';
            }

            else {
                alt1 +='1';
                alt2 +='0';
            }
        }

        int miss1 = 0 , miss2 = 0;
        int ans = INT_MAX;

        int left = 0;

        for(int r=0;r<2*n;r++){
            // counting mismatches
            if(s2[r]!= alt1[r]) miss1++;
            if(s2[r]!= alt2[r]) miss2++;

            if(r - left + 1 > n){ //size of windows more than n
                // decreasing misses of leftmost char which is getting 
                // removed from the window 

                if(s2[left]!= alt1[left]) miss1--;
                if(s2[left]!= alt2[left]) miss2--;
                left++; // move it forward

            }

            if( r - left + 1 == n){
                ans = min(ans , min(miss1 , miss2));
            }
        }

        return ans;
    }
};