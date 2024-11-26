
time and space complexity is O(log n)

class Solution {
public:

    int binSearch(vector<int> &nums, int tar, int st, int end) {
        while(st <= end) {
            int mid = st+(end - st)/2;

            if(nums[mid] == tar) return mid;

            else if(nums[mid] <= tar) {
                st = mid+1;
                return binSearch(nums,tar,st,end);
            }

            else {
                end = mid - 1;
                return binSearch(nums,tar,st,end);
            }
        }
        return -1;
    }

    int search(vector<int>& nums, int tar) {
        int st = 0;
        int end = nums.size() - 1;

        return binSearch(nums,tar,st,end);
        return -1;
    }
};