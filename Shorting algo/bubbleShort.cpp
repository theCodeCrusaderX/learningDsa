#include<bits/stdc++.h>
using namespace std;

// void bubbleShort(int arr[],int n) {
//     for(int i=n-1;i>=0;i--) {
//         int didSwap = 0;
//         for(int j=0;j<=i-1;j++) {
//             if(arr[j] > arr[j+1]) {
//                 int tmp = arr[j+1];
//                 arr[j+1] = arr[j];
//                 arr[j] = tmp;
//                 didSwap = 1;
//             }
//             if(didSwap == 0) {
//                 break;
//             }
//             cout << "\n if initialy array is shorted this not to be exicute \n";
//         }
//     }
// }

void bubble_sort(vector<int>& vec,int n)
{
    int k=0;
    int f =n;
    int didSwap =0;
    while(f)
    {
        for(int i=0;i<n-1-k;i++)
        {
            if(vec[i] > vec[i+1])
            {
                swap(vec[i],vec[i+1]);
                didSwap =1;
            }
        }
        if(didSwap ==0) break;
        k++;
        f--;
    }

int main() {
    int n;
    cin >> n;
    int arr[n];
    for(int i=0;i<n;i++) {
        cin >> arr[i];
    }

    cout << "using bubble short";
    bubbleShort(arr,n);
    for(int i=0;i<n;i++) {
        cout << arr[i] << " ";
    }
    // time complexity for bubble short:-
    //wrost and avg -> O(n^2)
    //best -> O(n)

    return 0;
}