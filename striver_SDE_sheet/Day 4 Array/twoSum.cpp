variety 1:--
in this problem we have to return indeces of nums present in array whose sum is equal to target 
variety 2: --
we dont want to return indeces if the sums is equal to target than we just return 1 if not than return 0

brute force approach for both variety:
time complexity is nearly about to O(n^2)
extra space complexity is O(1)
class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
        int n=nums.size();
        for(int i=0;i<n;i++)
        {
            for(int j=i+1;j<n;j++)
            {
                
                if((nums[i]+nums[j])==target)
                {
                    return {i,j};
                }
            }
        }
        return {};
    }
};

better and optimal approach for variety 2 
and better for variety 1
using map dataStructure
Time Complexity: 
O(n)
Space Complexity: 
O(n)
class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
        int n=nums.size();
        map<int,int> mpp;
        for(int i=0;i<n;i++)
        {
            int x=target-nums[i];
            if(mpp.find(x) != mpp.end())
            {
                return {mpp[x],i};
            }
            mpp[nums[i]] = i;    //here we are assing the key to val i.e nums[i] is maped to i
        }
        return {};
    }
};

optimal solution for variety 2:
two pointer approach

Time Complexity: O(N) + O(N*logN), where N = size of the array.
Reason: The loop will run at most N times. And sorting the array will take N*logN time complexity.

Space Complexity: O(1) as we are not using any extra space.

class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
        int n=nums.size();
        int left = 0;
        int right = n-1;
        sort(nums.begin(),nums.end());
        while (left < right)
        {
            int sum = nums[left] + nums[right];
            if( sum == target) return 1;
            else if (sum < target) left++;
            else right--;
        }
        return 0;
    }
};
