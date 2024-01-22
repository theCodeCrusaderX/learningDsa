//count the number of element in an array without using hashing

// #include<bits/stdc++.h>
// using namespace std;

// int noOfQ(int n, int num, int arr[]) {
//     int c = 0;
//     for (int i = 0; i < n; i++) {
//         if (arr[i] == num) {
//             c++;
//         }
//     }
//     return c;
// }

// int main() {
//     int n;
//     cin >> n;
//     int arr[n];
//     for (int i = 0; i < n; i++) {
//         cin >> arr[i];
//     }
//     int num, c = 0;
//     cin >> num;
//     cout << noOfQ(n, num, arr);
//     return 0;
// }


//--------------------------------------------------------------------------------------------------



//count the number of element in an array using hashing

#include<bits/stdc++.h>
using namespace std;

int main() {
    int n;
    cin >> n;
    int arr[n];
    for(int i=0;i<n;i++) {
        cin >> arr[i];
    }

    //pre-compute
    int hash[n+1] = {0};
    for(int i=0;i<n;i++) {
        hash[arr[i]] += 1;
    }

    int q;
    cin >> q;
    while(q--) {
        int hashindex;
        cin >> hashindex;
        //fetch
        cout << hash[hashindex] << endl;
    }
    return 0;
}