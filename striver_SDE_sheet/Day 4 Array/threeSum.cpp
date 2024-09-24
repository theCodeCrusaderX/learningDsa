class Solution {
public:

    void twoSum(vector<int>& nums,int target,int i, int j, vector<vector<int>>& result)
    {
      //Two pointer technique (Sorted array) Things you must not forget in interviews
        while(i < j)
        {
            if(nums[i] + nums[j] > target) j--;
            else if(nums[i] + nums[j] < target) i++;
            else {
                result.push_back({-target,nums[i],nums[j]});
                while(i < j && nums[i] == nums[i+1]) i++;
                while(i < j && nums[j] == nums[j-1]) j--;

                i++;//Things you must not forget in interviews
                j--; //Things you must not forget in interviews
            }
        }
    }

    vector<vector<int>> threeSum(vector<int>& nums) {
        int n = nums.size();

        if(n <= 2) return {};  //Things you must not forget in interviews

        sort(nums.begin(),nums.end());
        vector<vector<int>> result;
        for(int i=0; i<n-2; i++)  //(i<nums.size()-2)Things you must not forget in interviews
        {
            if(i !=0 && nums[i] == nums[i-1])  //Things you must not forget in interviews
            {
                continue;
            }

            int n1 = nums[i];
            int target = -n1;

            twoSum(nums,target,i+1,n-1,result);

        }
        return result;
    }
};