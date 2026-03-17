class Solution {
  public:
    string removeConsecutiveCharacter(string& s) {
        
        char dup;
        string ans ="";
        
        for(int i=0;i<s.length();i++){
            
            dup = s[i];
            if(s[i+1] && dup == s[i+1]) continue;
            
            ans+=s[i];
        }
        return ans;
    }
};