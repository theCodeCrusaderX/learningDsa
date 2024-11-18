
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

optimal sol::


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

                // whay i am doing this ? [-2,0,0,2,2]
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