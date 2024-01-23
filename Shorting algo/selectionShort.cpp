//Selection shorting:--

#include<bits/stdc++.h>
using namespace std;
void selectionShort(int arr[],int n) {
    for(int i=0;i<=n-2;i++) {
        int min = i;
        for(int j=i;j<=n-1;j++) {
            if(arr[j] < arr[min]) {
                min = j;
            }
        }
        int tmp = arr[i];
        arr[i] = arr[min];
        arr[min] = tmp;
    }
}


int main() {
    int n;
    cin >> n;
    int arr[n];
    for(int i=0;i<n;i++) {
        cin >> arr[i];
    }

    cout << "using selection short ";
    // selectionShort(arr,n);
    for(int i=0;i<n;i++) {
        cout << arr[i] << " ";
    }
    // time complexity for selection short:-
    //wrost,average,best -> O(n^2) 

    
    return 0;
}

