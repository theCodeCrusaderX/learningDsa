
better approach:

O(n^3)  o(n)

class Solution {
public:
    vector<vector<int>> fourSum(vector<int>& nums, int target) {
        int n = nums.size();
        set<vector<int>> res;

        for(int i=0; i<n; i++)
        {
            for(int j=i+1; j<n; j++)
            {
                set<long long> st;
                for(int k=j+1; k<n; k++)
                {
                    long long sum = nums[i] + nums[j];  
                    sum += nums[k];
                    // long long sum = num[i]+ nums[j]+ nums[k]  //we cant do like this int overflow
                    long long x = target - sum;
                    if(st.find(x) != st.end())
                    {
                       vector<int> temp = {nums[i], nums[j], nums[k], (int)x};
                       sort(temp.begin(),temp.end());//for removing duplicate we need to sort because when we insert temp in st it compair ele by ele.
                       res.insert(temp);
                    }
                    st.insert(nums[k]);
                }
            }
        }
        vector<vector<int>> ans(res.begin(), res.end());
        return ans;
    }
};