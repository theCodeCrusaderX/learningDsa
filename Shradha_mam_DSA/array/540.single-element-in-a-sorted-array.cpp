class Solution {
public:
    int singleNonDuplicate(vector<int>& nums) {
        int n = nums.size();
        int st = 0;
        int end = n - 1;

        if (n == 1)
            return nums[0];

        while (st <= end) {
            int mid = st + (end - st) / 2;

            if (mid == 0 && nums[mid] != nums[mid + 1])
                return nums[mid];
            if (mid == n - 1 && nums[mid] != nums[mid - 1])
                return nums[mid];

            if (nums[mid] != nums[mid - 1] && nums[mid] != nums[mid + 1])
                return nums[mid];
            // finding the no. of element in left or right half i.e even or odd.

            if (mid % 2 == 0) // even
            {
                if (nums[mid] == nums[mid - 1])
                    end = mid - 1;

                else
                    st = mid + 1;
            } else // odd
            {
                if (nums[mid] == nums[mid - 1])
                    st = mid + 1;

                else
                    end = mid - 1;
            }
        }
        return 0;
    }
};