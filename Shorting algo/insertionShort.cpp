#include<bits/stdc++.h>
using namespace std;
void insertionShort(int arr[], int n) {
    for(int i=0;i<n-1;i++) {
        int j=i;
        while(j>0 && arr[j-1] > arr[j]) {
            int tmp = arr[j-1];
            arr[j-1] = arr[j];
            arr[j] =tmp;

            j--;
        }
    }
}
int main() {
    int n;
    cin >> n;
    int arr[n];
    for(int i=0;i<n;i++) {
        cin >> arr[i];
    }

    cout << "using insertion short";
    insertionShort(arr,n);
    for(int i=0;i<n;i++) {
        cout << arr[i] << " ";
    }
    return 0;
}

//time complexity:- 
//wrost and avg -> O(n^2)
//best -> O(n) same logic as bubbleShort