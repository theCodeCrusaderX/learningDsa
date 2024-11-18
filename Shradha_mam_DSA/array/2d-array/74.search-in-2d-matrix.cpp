optimal sol 

time complexity O(log(m*n))


class Solution {
public:

    bool searchRow(vector<vector<int>>& mat, int tar,int row) {
        int n = mat[0].size();

        int st = 0;
        int end = n-1;

        while(st <= end) { //bs apply here for finding the exact no in a row O(log(n))

            int mid = st + (end - st)/2;

            if(mat[row][mid] == tar) {
                return true;
            }else if(mat[row][mid] > tar) {
                end = mid - 1;
            }else {
                st = mid +1;
            }
        }

        return false;
    }

    bool searchMatrix(vector<vector<int>>& mat, int tar) {
        int m = mat.size();//row
        int n = mat[0].size();//col

        int stRow = 0;
        int endRow = m-1;

        while(stRow <= endRow) {   //bs apply here for finding the row O(log(m))

            int midRow = stRow + (endRow - stRow)/2;

            if(mat[midRow][0] <= tar && mat[midRow][n-1] >= tar) {
                return searchRow(mat,tar,midRow);

            } else if(mat[midRow][n-1] >= tar) {
                
                endRow = midRow - 1;
                
            } else {
                stRow = midRow+1;
            }
        }

        return false;
    }
};