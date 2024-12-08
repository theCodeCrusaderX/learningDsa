
brute approach :

class Solution {
public:

    void helper(vector<int>& nums, vector<int>& temp, vector<vector<int>> &res, unordered_set<int> &st) {
        int n = nums.size();

        if(nums.size() == temp.size()) {
            res.push_back(temp);
            return;
        }

        for(int i=0; i<n; i++) {
            if(st.find(nums[i]) == st.end()) {
                temp.push_back(nums[i]);
                st.insert(nums[i]);

                helper(nums,temp,res,st);

                //backtracking step
                temp.pop_back();
                st.erase(nums[i]);
            }
        }
    }

    vector<vector<int>> permute(vector<int>& nums) {
        int n = nums.size();
        vector<vector<int>> res;  //to store the all the permutation
        vector<int> temp; //to store the single element 
        unordered_set<int> st; 

        helper(nums,temp,res,st);

        return res;
    }
};


optimal approach 

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