////midified



we know that:-

if x<y and y<z 
then x<z


TIME COMPLEXITY O(N)
SPACE COMPLEXITY O(1)
int isSorted(int n, vector<int> a) {
    // Write your code here.
    int i=0;
    while(i!=n-1)
    {
        if(a[i] <= a[i+1])
        {
            i++;
        }
        else
        {
            return 0;
        }
    }
    return 1;
}

// method 2
//NOT ADVICE TO REMEMBER THIS AS THE ABOVE ONE IS SAME TIME AND SPACE COMPLEXITY AND MORE READABLE

    int isSorted(int n, vector<int> a) {
    // Write your code here.
    int temp = a[0];
    for(int i=0;i<n;i++) {
        if(temp <= a[i]) {
            temp = a[i];
        }
        else {
            return 0;
        }
    }
    return 1;
    
}
