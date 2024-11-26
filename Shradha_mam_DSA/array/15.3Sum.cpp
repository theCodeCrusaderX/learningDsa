
brute approach :


class Solution {
public:
    vector<vector<int>> threeSum(vector<int>& nums) {
        int n = nums.size();
        set<vector<int>> st;

        for(int i=0; i<n; i++) {
            for(int j=i+1; j<n; j++) {
                for(int k=j+1; k<n; k++) {
                    if(nums[i]+nums[j]+nums[k] == 0) {
                        vector<int> trip = {nums[i],nums[j],nums[k]};
                        sort(trip.begin(),trip.end());
                        st.insert(trip);
                    }
                }
            }
        }
        vector<vector<int>> ans(st.begin(),st.end());
        return ans;
    }
};


better sol :

class Solution {
public:
    vector<vector<int>> threeSum(vector<int>& nums) {
        int n = nums.size();
        set<vector<int>> st;

        for(int i=0; i<n; i++) {
            int a = nums[i];
            unordered_map<int,int> mpp;
            for(int j=i+1; j<n; j++) {
                int b = nums[j];
                int x = -a-b;
                
                if(mpp.find(x) != mpp.end()) {
                    vector<int> trip = {a,b,x};
                    sort(trip.begin(),trip.end());
                    st.insert(trip);
                }else {
                    mpp[b]++;
                }
            }
        }
        vector<vector<int>> ans(st.begin(),st.end());
        return ans;
    }
};


