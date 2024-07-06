




/*
 *Longest Subarray with given Sum K(Positives & negative & zeros)
*/


Input :
A[] = {10, 5, 2, 7, 1, 9}
K = 15
Output : 4
Explanation:
The sub-array is {5, 2, 7, 1}.






brute aproach:--
time complexity is O(n^3)
extra space complexity is O(1)

int longestSubarrayWithSumK(vector<int> a, long long k) {
    int n = a.size(); // size of the array.

    int len = 0;
    for (int i = 0; i < n; i++) 
    { 
        for (int j = i; j < n; j++) 
        { 
            long long s = 0; //we have to reset the value of s

            for (int K = i; K <= j; K++) 
            {
                s += a[K];
            }

            if (s == k) 
            {
                len = max(len, j - i + 1);  //we have to store the max length in an iterator
            }
        }
    }
    return len;
}

upgradation of above code :-
brute approach with time complexity of O(n^2)
and extra space complexity of O(1)
int longestSubarrayWithSumK(vector<int> a, long long k) {
    int n = a.size();

    int len = 0;
    for (int i = 0; i < n; i++) 
    { 
        long long s = 0;
        for (int j = i; j < n; j++) 
        { 
            s+=a[j];
            if (s == k) 
            {
                len = max(len, j - i + 1);  //we have to store the max lenght in an iteration
            }
        }
    }
    return len;
}

BETTER SOLUTION: using map ds

TIME COMPLEXITY: O(N logN)+O(N) for larger val of N it would be O(N logN)

EXTRA SPACE COMPLEXITY: O(N) in wrost case if 0 not present in the given arr


class Solution{
    public:
    int lenOfLongSubarr(int A[],  int N, int K) 
    {
        int sum =0;
        int maxLen =0;
        map<int,int> mpp;
        for(int i=0;i<N;i++)
        {
            sum+=A[i];
            
            if(sum == K)
            {
                maxLen = max(maxLen,i+1);
            }
            
            int rem = sum - K;
            
            if(mpp.find(rem) != mpp.end())
            {
                int len = i-mpp[rem];
                maxLen = max(maxLen,len);
            }
            
            if(mpp.find(sum) == mpp.end())
            {
                mpp[sum] = i;
            }
        }
        return maxLen;
    } 
};


