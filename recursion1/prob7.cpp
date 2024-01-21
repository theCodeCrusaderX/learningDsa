// sum of n number by functional recursion

#include<bits/stdc++.h>
using namespace std;

int sumOfNum(int n) {
    if(n==0) {
        return 0;
    }
    else {
        return n+sumOfNum(n-1);
    }
}
int main() {
    int n;
    cin >> n;
    cout << sumOfNum(n);
    return 0;
}