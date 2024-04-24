brute approach 
time complexity O(n^3)

int maxSubarraySum(int arr[], int n) {
    int maxi = INT_MIN; // maximum sum

    for (int i = 0; i < n; i++) 
    {
        for (int j = i; j < n; j++) 
        {
            int sum = 0;

            for (int k = i; k <= j; k++) 
            {
                sum += arr[k];
            }

            maxi = max(maxi, sum);
        }
    }

    return maxi;
}

better solution
time complexity O(n^2)

int maxSubarraySum(int arr[], int n) {
    int maxi = INT_MIN; // maximum sum

    for (int i = 0; i < n; i++) 
    {
        sum =0;
        for (int j = i; j < n; j++)
        {
            sum+=arr[j];
            maxi = max(maxi,sum);
        }
    }

    return maxi;
}

optimal approach
time complexity O(n)

long long maxSubarraySum(int arr[], int n) 
{
    long long maxi = LONG_MIN; // maximum sum
    long long sum = 0;
    int start ,i;
    int ansStart,ansEnd;

    for ( i = 0; i < n; i++) 
    {
        if(sum == 0) start =i;

        sum += arr[i];

        if (sum > maxi) 
        {
            maxi = sum;
            ansStart = start;
            ansEnd = i;
        }

        if (sum < 0) 
        {
            sum = 0;
        }
    }
    
    for (int j = ansStart; j <= ansEnd; j++) 
    {
        cout << arr[j] << " ";
    }
    return maxi;
}