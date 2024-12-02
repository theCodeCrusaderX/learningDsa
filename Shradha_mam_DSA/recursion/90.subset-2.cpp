
optimal approach

class Solution {
public:
    void getAllSubset(vector<int> &nums, vector<int> &temp, int i, vector<vector<int>> &ans) {
        if(i == nums.size()) {
            ans.push_back(temp);
            return ;
        }

        //inclusion
        temp.push_back(nums[i]);
        getAllSubset(nums,temp,i+1,ans);

        temp.pop_back();

        //removing the duplicates
        int ind = i+1;
        while(ind < nums.size() && nums[ind] == nums[ind - 1]) {
            ind++;
        }

        //exclution
        getAllSubset(nums,temp,ind,ans);
    }

    vector<vector<int>> subsetsWithDup(vector<int>& nums) {
        sort(nums.begin(),nums.end());
        vector<int> temp;
        vector<vector<int>> ans;
        getAllSubset(nums,temp,0,ans);

        return ans;
    }
};