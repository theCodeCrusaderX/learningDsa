class Solution {
public:
    double myPow(double x, int n) {
        long bin = n;
        
        if(n < 0)
        {
            x = 1/x;
            bin = -bin;
        }

        double res = 1.0;
        while(bin > 0)
        {
            if(bin%2 == 1)
            {
                res = res*x;
            }
            x = x*x;
            bin = bin/2;
        }
        return res;
    }
};