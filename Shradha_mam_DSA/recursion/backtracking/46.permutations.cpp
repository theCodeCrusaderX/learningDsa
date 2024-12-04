class Solution {
public:

    void getPrms(vector<int> &nums, int idx, vector<vector<int>> &res) {

        int n = nums.size();

        if(idx == n) {
            res.push_back(nums);
            return;
        }

        for(int i=idx; i<n; i++) {
            swap(nums[i],nums[idx]);
            getPrms(nums,idx+1,res);

            swap(nums[i],nums[idx]);
        }
    }

    vector<vector<int>> permute(vector<int>& nums) {
        vector<vector<int>> res;
        getPrms(nums,0,res);

        return res;
    }
};