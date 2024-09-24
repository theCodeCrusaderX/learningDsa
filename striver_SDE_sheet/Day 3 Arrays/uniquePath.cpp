brute force approach:

time complexity : O(2^(m*n))


In the worst case, the number of calls can be approximated by O(2^(m+n)), as each move
generates two more moves until the base case is reached. This exponential growth leads to a 
very large number of calls, especially for larger values of m and n, resulting in a time
limit exceeded error.

Space Complexity: O(m + n) due to the maximum depth of the recursion stack.


class Solution {
public:

    int solve(int i, int j, int m, int n)
    {
        if(i >= m || j>=n) return 0;
        else if(i == m-1 && j == n-1) return 1;
        else return solve(i+1,j,m,n) + solve(i,j+1,m,n);
    }

    int uniquePaths(int m, int n) {
        return solve(0,0,m,n);
    }
};