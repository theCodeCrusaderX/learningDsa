

brute force can be of O(n^2)


class Solution {
    // Function to find the leaders in the array.
  public:
    vector<int> leaders(int n, int arr[]) {
        // Code here
        vector<int> temp;
        int temp_max_ind = n-1;
        temp.push_back(arr[temp_max_ind]);
        
        for(int j=n-2; j>=0; j--)
        {
            if(arr[j] > arr[temp_max_ind])
            {
                temp.push_back(arr[j]);
                temp_max_ind = j;
            }
        }
        
        reverse(temp.begin(),temp.end());
        return temp;
        
    }
};