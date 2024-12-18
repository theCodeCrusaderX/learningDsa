class Solution {
public:

    void helper(vector<int> &nums, int tar, vector<vector<int>> &ans, vector<int> &temp, int idx) {

        if(tar < 0) {
            return;
        }

        if(tar == 0) {
            ans.push_back(temp);
            return;
        }

        for(int i=idx; i<nums.size(); i++) {
            if(i>idx && nums[i] == nums[i-1]) continue;

            temp.push_back(nums[i]);
            helper(nums,tar-nums[i],ans,temp,i+1);
            temp.pop_back();
        }


    }

    vector<vector<int>> combinationSum2(vector<int>& candidates, int target) {
        vector<vector<int>> ans;
        vector<int> temp;
        sort(candidates.begin(),candidates.end());

        helper(candidates,target,ans,temp,0);

        return ans;
    }
};