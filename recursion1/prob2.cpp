//print n munber from 1 to n;

#include<bits/stdc++.h>
using namespace std;

void printNum(int i,int n) {
    if(i>n) {
        return;
    }
    else {
        cout << i << endl;
        printNum(++i,n);
    }

}

int main() {
    int n;
    cin >> n;
    printNum(1,n);
    return 0;
}


// Time Complexity:

// The printNum function is a recursive function that prints numbers from i to n.
// In the worst case, it will print numbers from 1 to n.
// The time complexity is O(n), where n is the input number.

// Space Complexity:

// The space complexity is determined by the depth of the recursion stack.
// In this case, the maximum depth of the recursion stack is n.
// Therefore, the space complexity is O(n) due to the recursion stack.