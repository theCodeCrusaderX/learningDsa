class Solution {
  public:
  
    bool isValid(int n,int arr[],int m,long long maxAllowedPages) 
    {
        int stu = 1,p = 0;
        
        for(int i=0;i<n;i++)
        {
            if(arr[i] > maxAllowedPages) return false;
            
            if(p+arr[i] <= maxAllowedPages){
               p += arr[i]; 
            } 
            else {
                stu++;
                p = arr[i];
            } 
        }
        return stu > m ? false : true;
    }
    // Function to find minimum number of pages.
    long long findPages(int n, int arr[], int m) {
        // if the no. of student > no. of books
        if(m > n){
            return -1;
        }
        
        int sum = 0;
        for(int i=0;i<n;i++)
        {
            sum += arr[i];
        }
        
        int st = 0;
        int end = sum;
        long long ans = -1;
        
        while(st <= end)
        {
            long long mid = st + (end-st)/2;
            
            if(isValid(n,arr,m,mid)) {  //left
                ans = mid;
                end = mid -1;
            }else { //right
                st = mid+1;
            }
        }
        return ans;
    }
};