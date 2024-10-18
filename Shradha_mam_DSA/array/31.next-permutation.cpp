class Solution {
public:
    void nextPermutation(vector<int>& nums) {
        int pivot = -1;
        int n = nums.size();

        // Find the first index from the right where nums[i] < nums[i + 1]
        for (int i = n - 2; i >= 0; i--) {
            if (nums[i] < nums[i + 1]) {
                pivot = i;
                break;
            }
        }

        // If no pivot is found, reverse the entire array (last permutation case)
        if (pivot == -1) {
            reverse(nums.begin(), nums.end());
            return;
        }

        // Find the first index from the right where nums[i] > nums[pivot]
        for (int i = n - 1; i > pivot; i--) {
            if (nums[i] > nums[pivot]) {
                swap(nums[i], nums[pivot]);
                break;
            }
        }

        // Reverse the subarray after the pivot
        int i = pivot + 1;
        int j = n - 1;

        // Reverse elements in place
        while (i < j) {
            swap(nums[i], nums[j]);
            i++;
            j--;
        }
    }
};
