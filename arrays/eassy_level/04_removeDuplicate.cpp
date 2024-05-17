
BRUTE FORCE APPROACH:

TIME COMPLEXITY O(n logn)
EXTRA SPACE COMPLEXITY O(K) //WHERE K IS THE NO OF UNIQUE ELEMENTS

class Solution {
public:
    int removeDuplicates(vector<int>& nums) {
        set<int> st;
        for(int i=0;i<nums.size();i++)
        {
            st.insert(nums[i]);
        }

        int i=0;
        for(auto it : st)
        {
            nums[i++] = it;
        }

        return i;
    }
};

OPTIMAL APPROACH:  TWO POINTER APPROACH

TIME COMPLEXITY: O(N)
EXTRA SPACE COMPLEXITY : O(1)

class Solution {
public:
    int removeDuplicates(vector<int>& nums) {
        int i=0;
        for(int j=1;j<nums.size();j++)
        {
            if(nums[i] != nums[j])
            {
                i++;
                swap(nums[i],nums[j]);
            }
        }
        return i+1;
    }
};