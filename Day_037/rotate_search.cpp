class Solution {
public:
    void rotate(vector<vector<int>>& matrix) {

        int n = matrix.size();

        // 90 deg rotate -  first transpose and then reverse rows

        // transpose
        for(int i=0 ; i<n ;i++){
            for(int j=i;j<n;j++){
                swap(matrix[i][j] , matrix[j][i]);
            }
        }

        // reversing rows
        for(int i=0 ; i<n ;i++){
            reverse(matrix[i].begin() , matrix[i].end());
        }
    }
};