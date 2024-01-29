// Find the Largest element in an array
//https://takeuforward.org/data-structure/find-the-largest-element-in-an-array/


#include<bits/stdc++.h>
using namespace std;

int main() {
    int arr[6] = {1,5,9,8,2,6};
    int lval = arr[0];
    for(int i=0;i<6;i++) {
        if(lval < arr[i]) {
            lval = arr[i];
        }
    }
    cout << lval;
    return 0;
}