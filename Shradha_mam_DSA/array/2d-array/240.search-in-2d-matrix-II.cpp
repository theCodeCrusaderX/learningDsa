
optimal Solution

time complexity 
O(m+n)

class Solution {
public:
    bool searchMatrix(vector<vector<int>>& mat, int tar) {
        int m = mat.size();
        int n = mat[0].size();

        int row = 0;
        int col = n-1;

        while(col >=0 && row < m) {
            if(mat[row][col] == tar) {
                return true;
            }else if(mat[row][col] < tar) {
                row++;
            }else {
                col--;
            }
        }
        return false;
    }
};