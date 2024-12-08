

optimal sol 

class Solution {
public:

    void helper(vector<int> &nums, int idx, vector<int> &temp, vector<vector<int>> &ans) {
        if(nums.size() == idx) {
            ans.push_back({temp});
            return;
        }

        //step 1:
        //inclusion
        temp.push_back(nums[idx]);
        helper(nums,idx+1,temp,ans);

        //step 2:
        //exclusion
        temp.pop_back();
        helper(nums,idx+1,temp,ans);
    }

    vector<vector<int>> subsets(vector<int>& nums) {
        vector<int> temp;
        vector<vector<int>> ans;
        helper(nums,0,temp,ans);

        return ans;
    }
};