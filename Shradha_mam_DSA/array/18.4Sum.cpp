brute approach :

class Solution {
public:
    vector<vector<int>> fourSum(vector<int>& nums, int target) {
        int n = nums.size();
        set<vector<int>> st;

        for(int i=0; i<n; i++) {
            for(int j=i+1; j<n; j++) {
                for(int k=j+1; k<n; k++) {
                    for(int l=k+1; l<n; l++) {
                        if(nums[i]+nums[j]+nums[k]+nums[l] == target) {
                            st.insert({nums[i],nums[j],nums[k],nums[l]});
                        }
                    }
                }
            }
        }
        vector<vector<int>> ans(st.begin(),st.end());
        return ans;
    }
};

brute sol :

class Solution {
public:
    vector<vector<int>> fourSum(vector<int>& nums, int target) {
        int n = nums.size();
        set<vector<int>> st;

        for (int i = 0; i < n; i++) {
            long long a = (long long)nums[i];
            for (int j = i + 1; j < n; j++) {
                long long b = (long long)nums[j];
                unordered_map<int, int> mpp;
                for (int k = j + 1; k < n; k++) {
                    long long c = (long long)nums[k];
                    long long x = (long long)target - a - b - c;
                    if (x >= INT_MIN && x <= INT_MAX && mpp.find((int)x) != mpp.end()) {
                        vector<int> qurd = {(int)a, (int)b, (int)c, (int)x};
                        sort(qurd.begin(), qurd.end());
                        st.insert(qurd);
                    }
                    mpp[nums[k]]++;
                }
            }
        }
        vector<vector<int>> ans(st.begin(), st.end());
        return ans;
    }
};


optimal sol :


class Solution {
public:
    void twoSum(vector<int>& nums,int a, int b, int st, int end, long long tar, vector<vector<int>>& ans) {
        while (st < end) {
            long long sum = nums[st] + nums[end];
            if (sum == tar) {
                ans.push_back({a, b, nums[st], nums[end]});
                while (st < end && nums[st] == nums[st + 1]) st++; // Skip duplicates
                while (st < end && nums[end] == nums[end - 1]) end--; // Skip duplicates
                st++;
                end--;
            } else if (sum < tar) {
                st++;
            } else {
                end--;
            }
        }
    }

    vector<vector<int>> fourSum(vector<int>& nums, int tar) {
        sort(nums.begin(), nums.end());
        int n = nums.size();
        vector<vector<int>> ans;

        if (n < 4) return ans; // Early exit for insufficient elements

        for (int i = 0; i < n; i++) {
            int a = nums[i];
            if (i > 0 && nums[i] == nums[i - 1]) continue; // Skip duplicates
            for (int j = i + 1; j < n; j++) {
                int b = nums[j];
                if (j > i + 1 && nums[j] == nums[j - 1]) continue; // Skip duplicates
                
                int st = j + 1;
                int end = n - 1;
                twoSum(nums,a,b, st, end, (long long)tar - a - b, ans);
            }
        }

        return ans;
    }
};
