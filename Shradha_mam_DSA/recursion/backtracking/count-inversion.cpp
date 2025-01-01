
//overall time complexity -> O(logn * n)
//overall extra space complexity -> O(n)  due to temp vector that has been used in fun mergeSortedHelperFun

#include <iostream>
#include <vector>

using namespace std;

int mergeSortedHelperFun(vector<int> &nums, int st, int mid, int end) {  //7,2,6,5,4  //O(n)

  int count = 0;

  vector<int> temp;
  int i = st;
  int j = mid+1;

  while(i <= mid && j <= end) {
    if(nums[i] < nums[j]) {
      temp.push_back(nums[i]);
      i++;
    }else {
      temp.push_back(nums[j]);
      count += (mid - i + 1);
      j++;
    }
  }

  //if left ele is left;
  while(i <= mid) {
    temp.push_back(nums[i]);
    i++;
  }

  //if right ele is left;
  while(j <= end) {
    temp.push_back(nums[j]);
    j++;
  }

  for(int ind = 0; ind < temp.size(); ind++) {
    nums[ind+st] = temp[ind];
  }
  return count;
}

int helper(vector<int> &nums, int st, int end) {  
  if(st < end) {
    
  
  int mid = st + (end - st) / 2;  //mid -> 0
  int leftCount = helper(nums,st,mid);  //st -> 0  //mid -> 0
  int rightCount = helper(nums,mid+1,end);  //end -> 1 //mid -> 0
  int count = mergeSortedHelperFun(nums,st,mid,end);

  return leftCount+rightCount+count;
  }

  return 0;
}

void merge(vector<int> &nums) {
  int n = nums.size();
  int count = helper(nums,0,n-1);
  cout << count;
}

int main() {
  vector<int> vec = {6,3,5,2,7};
  merge(vec);
  return 0;
}