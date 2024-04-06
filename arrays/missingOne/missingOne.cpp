this is brute approach and the time complexity is O(n^2)

#include <bits/stdc++.h>

class Solution {
public:
    int missingNumber(vector<int>& nums) {
        int n = nums.size();
        int flag=0;
        for(int i=0;i<n;i++)
        {
            for(int j=0;j<n;j++)
            {
                if(nums[j] == i)
                {
                    flag =1;
                    break;
                }
            }
            if(flag == 0) return i;
        }
        return -1;
    }
};


method 2-
better approach
time complexity is O(n logn)

problem is in line 41 does not hold for larger input it may give out of boundary error
#include <bits/stdc++.h>

class Solution {
public:
    int missingNumber(vector<int>& nums) {
        int n1 = nums.size();
        sort(nums.begin(), nums.end());
        for(int i=0; i<=n1; i++)
        {
            if(nums[i] != i)
            {
                return i;
            }
        }
        return -1;
    }
};


another better approach:-

using hasing
time complexity is O(n)
and extra space complexity is O(n) too...

class Solution {
public:
    int missingNumber(vector<int>& nums) {
        int n= nums.size();
        int hash[n+1] = {0}
        for(int i=0;i<n-1;i++)
        {
            hash[nums[i]] = 1;
        }

        for(int i=0;i<n;i++)
        {
            if(hash[i] == 0) return i;
        }
    }
};

method 3:--

optimal solution
time complexity is O(n)
and space complexity is O(1)
#include <bits/stdc++.h>

class Solution {
public:
    int missingNumber(vector<int>& nums) {
        int n1= nums.size();
        int sum = (n1*(n1+1))/2;
        int s=0;
        for(int i=0;i<n1;i++)
        {
            s=s+nums[i];
        }
        return (sum - s);
    }
};

here we have another optimal solution which is by using XOR
in the above optimal sol there might be chances of int overflow but in this case there is no such 
things happens

int missingNumber(vector<int>& nums) {
        // int n = nums.size();
        // int XOR1 = 0;
        // int XOR2 = 0;
        // for (int i = 0; i < n; i++) {
        //     XOR1 = XOR1 ^ i;
        // }
        // for (int i = 0; i < n; i++) { // Corrected loop condition
        //     XOR2 = XOR2 ^ nums[i];
        // }
        // return (XOR1 ^ XOR2);

        int N=nums.size();
        int xor1 = 0, xor2 = 0;

        for (int i = 0; i < N - 1; i++) {
            xor2 = xor2 ^ nums[i]; // XOR of array elements
            xor1 = xor1 ^ (i + 1); //XOR up to [1...N-1]
        }
        xor1 = xor1 ^ N; //XOR up to [1...N]

        return (xor1 ^ xor2);
