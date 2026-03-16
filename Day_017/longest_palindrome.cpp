class Solution {
public:
    int longestPalindrome(string s) {

        // map to store freq
        unordered_map<char,int> count;

        for(int i=0;i<s.length();i++){
            count[s[i]]++;
        }

        int ans = 0;
        bool isOdd = false;

        for(auto it: count) {

            int freq = it.second;

            if(freq%2 == 0){
                ans+= freq;
            }
            else {
                ans+= freq -1;
                isOdd = true;
            }

        }

        if(isOdd){
            ans+=1;
        }

        return ans;
    }
};