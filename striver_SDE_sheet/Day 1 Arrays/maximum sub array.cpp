brute force approach:

time complexity: O(n^2)
space complexity : O(1)

class Solution {
public:
    int maxSubArray(vector<int>& nums) {

        int n = nums.size();
        int s=0;
        int maxi =INT_MIN;
        for(int i=0;i<n;i++)
        {
            s=0;
            for(int j=i;j<n;j++)
            {
                s=s+nums[j];
                maxi = max(maxi,s);
            }
        }
        return maxi;
    }
};


optimal sol:
kadane's algo

time complexity: O(n)
space complexity: O(1)

class Solution {
public:
    int maxSubArray(vector<int>& nums) {

        // kadane's algo
        int n = nums.size();
        int sum =0;
        int maxi = INT_MIN;
        for (int i = 0; i<n;i++)
        {
            sum+=nums[i];
            maxi = max(maxi,sum);
            if(sum < 0) sum =0;
        }
        return maxi;
    }
};


// also revise and do with recursion