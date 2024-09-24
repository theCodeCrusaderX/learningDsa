
#include<bits/stdc++.h>


time complexity : O(m*n*(m+n)).

class Solution {
public:
    void rowMatrix(vector<vector<int>>& matrix,int i,int n)
    {
        for(int j=0;j<n;j++)
        {
            if(matrix[i][j] !=0) matrix[i][j] = -1; 
        }
    }
    void colMatrix(vector<vector<int>>& matrix,int j,int m)
    {
        for(int i=0;i<m;i++)
        {
            if(matrix[i][j] !=0) matrix[i][j] = -1; 
        }
    }
    void setZeroes(vector<vector<int>>& matrix) {
        int n= matrix[0].size();  //no. of col
        int m= matrix.size();     //no. of rows
        
        for(int i=0;i<n;i++)
        {
            for(int j=0;j<m;j++)
            {
                if(matrix[i][j] == 0)
                {
                    rowMatrix(matrix,i,n);
                    colMatrix(matrix,j,m);
                }
            }
        }

        for(int i=0;i<n;i++)
        {
            for(int j=0;j<m;j++)
            {
                if(matrix[i][j] == -1) matrix[i][j] =0;
            }
        }
    }
};

better sol:
time complexity O(m*n)
space complexlity O(m+n)

class Solution {
public:
    void setZeroes(vector<vector<int>>& matrix) {
        int m = matrix.size();    //no of rows
        int n = matrix[0].size(); //no of col

        vector<int> row(m, 0); // row array
        vector<int> col(n, 0); // col array

        // Traverse the matrix:
        for (int i = 0; i < m; i++) {
            for (int j = 0; j < n; j++) {
                if (matrix[i][j] == 0) {
                    // mark ith index of row with 1:
                    row[i] = 1;

                    // mark jth index of col with 1:
                    col[j] = 1;
                }
            }
        }

        // Finally, mark all (i, j) as 0
        // if row[i] or col[j] is marked with 1.
        for (int i = 0; i < m; i++) {
            for (int j = 0; j < n; j++) {
                if (row[i] == 1 || col[j] == 1) {
                    matrix[i][j] = 0;
                }
            }
        }
    }
};