
time complexity is O(logn)


class Solution {
public:

    double solve(double x, long long n)
    {
        if(n == 0) return 1;
        if(n == 1) return x;
        if (n < 0) return solve(1/x,-n);
        if(n%2 == 0) return solve(x*x,n/2);
         else return x*solve(x*x,(n-1)/2);
    }
    double myPow(double x, int n) {
        return solve(x,(long long)n);
    }
};