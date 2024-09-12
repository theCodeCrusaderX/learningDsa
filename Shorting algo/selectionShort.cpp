//Selection shorting:--

#include<bits/stdc++.h>
using namespace std;
// void selectionShort(int arr[],int n) {
//     for(int i=0;i<=n-2;i++) {
//         int min = i;
//         for(int j=i;j<=n-1;j++) {
//             if(arr[j] < arr[min]) {
//                 min = j;
//             }
//         }
//         int tmp = arr[i];
//         arr[i] = arr[min];
//         arr[min] = tmp;
//     }
// }

//selection sort

int min_ele(vector<int>& vec,int n,int i)
{
    int min = i;
    for(int j=i;j<n;j++)
    {
        if(vec[j] < vec[min])
        {
            min = j;
        }
    }
    return min;
}
void selection_sort(vector<int>& vec,int n)
{
    for(int i=0;i<n;i++)
    {
        int minEle = min_ele(vec,n,i);
        swap(vec[i],vec[minEle]);
        
    }
    for(auto it : vec)
    {
        cout << it << " ";
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
    selection_sort(arr,n);
    for(int i=0;i<n;i++) {
        cout << arr[i] << " ";
    }
    // time complexity for selection short:-
    //wrost,average,best -> O(n^2) 

    
    return 0;
}

