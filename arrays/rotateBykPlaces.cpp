
this is a brute force approach :--
time complexcity in wrost case is O(n^2)

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