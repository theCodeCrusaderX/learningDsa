







Input: nums = [1,2,3,4,5,6,7], k = 3
Output: [5,6,7,1,2,3,4]















WHEN ARRAY IS SHIFTING TO RIGTH w.r.t LAST ELEMENT

this is a brute force approach :--
time complexcity in wrost case is O(n^2)
extra space complexity is O(1)

vector<int> rotateArray(vector<int>arr, int k) {
    // Write your code here.
    while(k)
    {
        int temp = arr[0];
        int i;
        for(i = 0; i<arr.size()-1;i++) 
        {
            arr[i] = arr[i+1];
        }
        arr[i] = temp;
        
        k--;
    }
    return arr;
}

method 2:-- 
optimal solution
time complexity is O(2n) which is O(n)

vector<int> rotateArray(vector<int> arr, int k) {
  // Write your code here.
  int n = arr.size();

  k = k % n;       //1 divided by 5 equals 0 with a remainder of 1.

  reverse(arr.begin(), arr.begin() + k);  //it exclude the last value
  reverse(arr.begin() + k, arr.end());
  reverse(arr.begin(), arr.end());
  return arr;
}


****************************************************************************************************


WHEN ARRAY IS SHIFTING TO LEFT w.r.t FIRST ELEMENT

this is a brute force approach :--
time complexcity in wrost case is O(n^2)
extra space complexity is O(1)

vector<int> rotateArray(vector<int>arr, int k) {
    // Write your code here.
    while(k)
    {
        int temp = arr[n-1];
        int i;
        for(i = 0; i<arr.size()-1;i++) 
        {
            arr[i] = arr[i+1];
        }
        arr[0] = temp;
        
        k--;
    }
    return arr;
}


method 2:-- 
optimal solution
time complexity is O(2n) which is O(n)

class Solution {
public:
    void rotate(vector<int>& nums, int k) {

        k=k%nums.size();
        
        reverse(nums.begin(),nums.end());
        reverse(nums.begin(),nums.begin()+k);
        reverse(nums.begin()+k,nums.end());
    }
};