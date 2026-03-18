class Solution {
public:
    string longestCommonPrefix(vector<string>& strs) {

        // edge case 
        if(strs.empty()) return "";

        for(int i=0 ; i<strs[0].length() ; i++){

            char ch = strs[0][i];

            for(int j= 1; j<strs.size() ; j++){
                if( !strs[j].length() || strs[j][i]!= ch){ // mismatch
                    return strs[0].substr(0,i);
                }
            }
        }

        return strs[0];
        
    }
};