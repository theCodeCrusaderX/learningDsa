brute :

class Solution {
public:
    void merge(vector<int>& nums1, int m, vector<int>& nums2, int n) {
        vector<int> v;
        for(auto it : nums1)
        {
            if(it !=0)
             v.push_back(it);
        }
        if(n !=0)
        {
            for(auto it : nums2)
            {
                v.push_back(it);
            }
        }

        int i=0;
        for(auto it : v)
        {
            nums1[i] = it;
            i++;
        }
        sort(nums1.begin(),nums1.end());
    }
};