//print sum of n numbers by passing parameters in function;

#include<bits/stdc++.h>
using namespace std;

int son(int i, int sum) {
    if(i<1) {
        return sum;
    }
    else {
        son(i-1,sum+i);
    }
}
int main() {
    int n;
    cin >> n;
    cout << son(n,0);
    return 0;
}