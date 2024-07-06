





/*
 *Longest Subarray with given Sum K(Positives)
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


most OPTIMAL SOL FOR THIS PROBLEM ONLY FOR POSITIVE INCLUDING ZERO IN THE ARRAY :

TWO POINTER APPROACH
TIME COMPLEXITY IS O(N)

    int lenOfLongSubarr(vector<int>A,  int N, int K) 
    {
        int left=0;
        int right=0;
        int sum=A[0];
        int maxLen =0;
        while(right < N)
        {
            if(sum == K)
            {
                maxLen = max(maxLen,right-left+1);
            }
            
            if(right < N)
            {
                right++;
                sum+=A[right];
            }
            
            if(left<=right && sum > K)
            {
                sum-=A[left];
                left++;
            }
        }
       
        return maxLen;
    } 





















// it is done by me i dont know why it is not working:--
// vector<int> sum(vector<int> v,long long k)
// {
//     int len = v.size();
//     int x=0;
//     for(int i=0;i<len;i++)
//     {
//         x=x+v[i];
//         if(x>k)
//         {
//             return {0};
//         }
//     }
//     return {x,len};
// }

// int longestSubarrayWithSumK(vector<int> a, long long k) {
//     // Write your code here
//     int n = a.size();
//     vector<int> v;
//     vector<int> temp;
//     int maxi = 0;
//     for(int i=0;i<n;i++)
//     {
//         for(int j=i;j<n;j++)
//         {
//             // v.insert(v.begin()+j, a[j]);
//             v.push_back(a[j]);
//             auto calSum = sum(v,k);
//             if(calSum[0] == k)
//             {
//                 temp.push_back(calSum[1]);
//                 break;
//             }
//             if(calSum[0] == 0)
//             {
//                 break;
//             }
//         }
        
//         for(int i=0;i<temp.size();i++)
//         {
//             if(temp[i] > maxi)
//             {
//                 maxi = temp[i];
//             }
//         }
//     }
//     return  maxi;
// }