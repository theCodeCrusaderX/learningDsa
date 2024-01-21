// using recursion printing name 5 times;


#include<bits/stdc++.h>
using namespace std;
int c=0 ;
void printname() {
    if(c != 5) {
        c++;
        cout << "Dinesh" << endl;
        printname();
    }
}

int main()
{
    printname();
    return 0;
}