
time & space complexity O(n) 

bool isShorted(vector<int> nums, int n) {
  if(n == 0 || n == 1) {
    return true;
  }

  return nums[n-1] >= nums[n-2] && isShorted(n-1);
}