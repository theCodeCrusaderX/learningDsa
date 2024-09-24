
brute force approach:

class Solution {
public:
    int reversePairs(vector<int>& nums) {
        int n = nums.size();
        long long count =0;
        for(int i=0; i<n;i++)
        {
            for(int j=i+1; j<n; j++)
            {
                if(nums[i] > (long long)2*nums[j]) count++;
            }
        }
        return count;
    }
};


optimal sol:


