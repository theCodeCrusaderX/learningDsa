
brute sol 
space complexity O(n)

class Solution {
public:
    int findDuplicate(vector<int>& nums) {
        unordered_set<int> st;

        for(auto it : nums) {
            if(st.find(it) != st.end()) {
                return it;
                break;
            }
            st.insert(it);
        }

        return -1;
    }
};


optimal sol 
constant space complexity

using slow and fast pointer approach

class Solution {
public:
    int findDuplicate(vector<int>& nums) {
        int slow = 0;
        int fast = 0;

        slow = nums[slow];
        fast = nums[nums[fast]];

        while(slow != fast) {
            slow = nums[slow];
            fast = nums[nums[fast]];
        }

        slow = 0;

        while(slow != fast) {
            slow = nums[slow];
            fast = nums[fast];
        }

        return slow;
    }
};