#include <iostream>
#include <vector>
using namespace std;

int helper(vector<int> &nums, int st, int end) { // 5,1,2,5,7,8 for step 1;
  int ind = st -1;
  int pivot = nums[end];

  for(int j=st; j<=end-1; j++) {
    if(nums[j] <= pivot) {
      ind++;
      swap(nums[ind],nums[j]);
    }
  }
  ind++;
  swap(nums[ind],nums[end]);
  return ind;
}

void QuickSort(vector<int> &nums, int st, int end) {
  if(st < end) {
  
  int pivInd = helper(nums,st,end);
  //left call
  QuickSort(nums,st,pivInd-1);
  //right call
  QuickSort(nums,pivInd+1,end);

  }
}

int main() {
  vector<int> vec = {7,8,5,1,2,5};
  int st = 0;
  int end = vec.size()-1;
  QuickSort(vec,st,end);  

  for(auto it : vec) {
    cout << it << " ";
  }
  return 0;
}