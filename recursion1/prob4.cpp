//print n number from 1 to n use the backtraking;

#include<bits/stdc++.h>
using namespace std;

void printNum(int i,int n) {
    if(i<1) {
        return;
    }
    else {
        printNum(i-1,n);
        cout << i << endl;

    }
}

int main() {
    int n;
    cin >> n;
    printNum(n,n);
    return 0;
}

//The time and space complexity is O(n).
