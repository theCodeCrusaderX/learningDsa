






Input: nums = [3,0,1]
Output: 2














Explanation: 
    n = 3 since there are 3 numbers, so all numbers are in the range [0,3]. 2 is the missing number 
    in the range since it does not appear in nums.


brute approach and the time complexity is O(n^2)

class Solution {
public:
    int missingNumber(vector<int>& nums) {

        int n=nums.size();
        for(int i=0;i<=n;i++)
        {
            int flag =0;
            for(auto it : nums)
            {
                    
                if(i == it)
                {
                    flag = 1;
                    break;
                }
                
            }
            if(flag == 0) return i ;
        }
        return 0;
  
    }
};


method 2-
better approach
time complexity is O(n logn) + O(n) but for larger value of n O(nlogn) domenent!

larger input may give out of boundary error 

class Solution {
public:
    int missingNumber(vector<int>& nums) {
        int n = nums.size();
        sort(nums.begin(),nums.end());
        int i;
        for( i=0;i<n;i++)
        {
            if(nums[i] != i) break;
        }
        return i;
    }
};


another better approach:-

using hasing
time complexity is O(n)
and extra space complexity is O(n) too...

class Solution {
public:
    int missingNumber(vector<int>& nums) {
        int n=nums.size();
        vector<int> hash(n + 1, 0);
        for(int i=0;i<n;i++)
        {
            hash[nums[i]] = 1;
        }

        for(int i=0;i<n+1;i++)
        {
            if(hash[i] == 0) return i;
        }
        return -1;
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
        int n = nums.size();
        int XOR1 = 0;
        int XOR2 = 0;
        for (int i = 0; i < n; i++) {
            XOR1 = XOR1 ^ i;              //in memory it will take at as a number for eg. 0^1^2^3^4 = 4
        }
        for (int i = 0; i < n; i++) { 
            XOR2 = XOR2 ^ nums[i];     //same as here it will take it as a number 
        }
        return (XOR1 ^ XOR2);   //b

}

same as above but decrement one extra loop

class Solution {
public:
    int missingNumber(vector<int>& nums) {

        int N=nums.size();
        int xor1 = 0, xor2 = 0;

            for (int i = 0; i < N ; i++) {
                xor2 = xor2 ^ nums[i]; // XOR of array elements
                xor1 = xor1 ^ (i); //XOR up to [1...N-1]
            }
            xor1 = xor1 ^ N; //XOR up to [1...N]

            return (xor1 ^ xor2); 
    }
};
