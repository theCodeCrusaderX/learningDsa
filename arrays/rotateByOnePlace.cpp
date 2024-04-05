#include <bits/stdc++.h> 
vector<int> rotateArray(vector<int>& arr, int n) {
    // Write your code here.
    int temp = arr[0];
    int i;
    for(i=1;i<n;i++) 
    {
        arr[i-1] = arr[i];
    }
    arr[n-1] = temp;
    
    return arr;
}

method 2:--

#include <bits/stdc++.h> 
vector<int> rotateArray(vector<int>& arr, int n) {
    int temp = arr[0];
    int i;
    for(i = 0; i<n-1; i++) 
    {
        arr[i] = arr[i+1];
    }
    arr[i] = temp;

    return arr;
}

