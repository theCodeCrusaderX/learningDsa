brute approach :
time complexity : O(n^2)


better approach :
time complexity : O(mlogn)

class Solution {
public:
    bool searchMatrix(vector<vector<int>>& matrix, int target) {

        int m = matrix.size();
        for(int i=0; i<m; i++)
        {
            int l=0;
            int r= matrix[i].size()-1;
            while(l <=r)
            {
                int mid = (l+r)/2;

                if(matrix[i][mid] > target) r=mid-1;
                else if(matrix[i][mid] < target) l=mid+1;
                else if(matrix[i][mid] == target) return true; 
            }
        }
        return false;
    }
};

optimal approach: 
time complexity : O(log(m*n))
class Solution {
public:
    bool searchMatrix(vector<vector<int>>& matrix, int target) {

        int m = matrix.size();
        int n = matrix[0].size();

            int l=0;
            int r=(m*n)-1;
            while(l <=r)
            {
                int mid = (l+r)/2;

                if(matrix[mid/n][mid%n] > target) r=mid-1;
                else if(matrix[mid/n][mid%n] < target) l=mid+1;
                else if(matrix[mid/n][mid%n] == target) return true; 
            }
        return false;
    }
};