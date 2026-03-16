class Solution {
public:
    int minOperations(string s) {

        int alt1 = 0; // 01010101 even has '0'
        int alt2 = 0; // 10101010 even has '1'

        for(int i=0;i<s.length();i++){
            if(i % 2 == 0){ // even index

            if(s[i]!='0') alt2++;
            if(s[i]!='1') alt1++;

            }

            else { // odd index 
                if(s[i]!='0') alt1++;
                if(s[i]!='1') alt2++;
            }
        }

        return min(alt1,alt2); 
    }
};