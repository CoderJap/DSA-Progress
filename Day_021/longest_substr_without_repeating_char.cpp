class Solution {
public:
    int lengthOfLongestSubstring(string s) {

        unordered_map<char , int> charIndex;

        int left = 0;
        int maxLen = 0;

        for(int right=0; right < s.length() ; right++){

            if(charIndex.find(s[right])!= charIndex.end()){ // duplicate

                left = max(left , charIndex[s[right]] + 1); // move left to 
                                               // last occurence of that char
            }
                charIndex[s[right]] = right; // update index in map 
                maxLen = max(maxLen , right - left + 1);
            
        }
        return maxLen;

    }
};