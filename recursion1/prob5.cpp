// print n number from n to 1 using backtraking;

#include<bits/stdc++.h>
using namespace std;

void printNum(int n,int i) {
    if(i>n) {
        return;
    }
    else {
        printNum(n,i+1);
        cout << i <<endl;
    }
}
int main() {
    int n;
    cin >> n;
    printNum(n,1);
    return 0;
}

//The time and space complexity is O(n).
