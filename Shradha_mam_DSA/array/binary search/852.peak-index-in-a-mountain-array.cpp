class Solution {
public:
    int peakIndexInMountainArray(vector<int>& arr) {
        int n = arr.size();

        //edge case that we dont getting our ans in first or last 
        int st = 1;
        int end = n-2;

        while(st <= end)
        {
            int mid = st+ (end-st)/2;
            
            if(arr[mid-1] < arr[mid] && arr[mid] > arr[mid+1]) return mid;

            else if(arr[mid-1] < arr[mid]) st = mid+1;

            else end = mid-1;
        }
        return 0;
    }
};