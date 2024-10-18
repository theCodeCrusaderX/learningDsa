
space O(m+n)

class Solution {
public:
    void merge(vector<int>& nums1, int m, vector<int>& nums2, int n) {
        int i = 0;
        int j = 0;
        vector<int> temp;

        while(i < m && j < n)   
        {
            if(nums1[i] <= nums2[j]) {
                temp.push_back(nums1[i]);
                i++;
            }else {
                temp.push_back(nums2[j]);
                j++;
            }
        }

        while(i < m)
        {
            temp.push_back(nums1[i]);
            i++;
        }

        while(j < n)
        {
            temp.push_back(nums2[j]);
            j++;
        }

        for(int k=0; k<temp.size(); k++)
        {
            nums1[k] = temp[k];
        }
    }
};


optimal Solution space O(1)

class Solution {
public:
    void merge(vector<int>& nums1, int m, vector<int>& nums2, int n) {
        int i = m-1;
        int j = n-1;

        int ind = m+n-1;

        while(i>=0 && j>=0)
        {
            if(nums1[i] <= nums2[j]) {
                nums1[ind] = nums2[j];
                ind--;
                j--;
            }else {
                nums1[ind] = nums1[i];
                ind--;
                i--;
            }
        }

        while(j >=0)
        {
            nums1[ind] = nums2[j];
            ind--;
            j--;
        }
    }
};