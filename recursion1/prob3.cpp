//print n munber from n to 1;

#include<bits/stdc++.h>
using namespace std;

void printNum(int i,int n) {
    if(i>n) {
        return;
    }
    else {
        cout << n << endl;
        printNum(i,--n);
    }

}

int main() {
    int n;
    cin >> n;
    printNum(1,n);
    return 0;
}

//The time and space complexity is O(n).