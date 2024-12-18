
//overall time complexity -> O(logn * n)
//overall extra space complexity -> O(n)  due to temp vector that has been used in fun mergeSortedHelperFun

#include <iostream>
#include <vector>

using namespace std;

void mergeSortedHelperFun(vector<int> &nums, int st, int mid, int end) {  //7,2,6,5,4  //O(n)
  vector<int> temp;
  int i = st;
  int j = mid+1;

  while(i <= mid && j <= end) {
    if(nums[i] < nums[j]) {
      temp.push_back(nums[i]);
      i++;
    }else {
      temp.push_back(nums[j]);
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
}

void helper(vector<int> &nums, int st, int end) {  
  if(st < end) {
    
  
  int mid = st + (end - st) / 2;  //mid -> 0
  helper(nums,st,mid);  //st -> 0  //mid -> 0
  helper(nums,mid+1,end);  //end -> 1 //mid -> 0
  mergeSortedHelperFun(nums,st,mid,end);
  }
}

void merge(vector<int> &nums) {
  int n = nums.size();
  helper(nums,0,n-1);
}

int main() {
  vector<int> vec = {7,2,6,5,4,4,9};
  merge(vec);

  for(auto it : vec) {
    cout << it << " ";
  }
  return 0;
}