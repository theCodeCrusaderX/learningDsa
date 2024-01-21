//pallindrome of string

#include<bits/stdc++.h>
using namespace std;

void checkpallindrome(int i,string str,int l) {
    if(i>=l/2) {
        cout << "yes";
    }
    else {
            if(str[i]!=str[l-i-1]) {
            cout << "no";
        }
        else {
            checkpallindrome(i+1,str,l);
        }
    }
    
}
int main() {
    string str;
    cin >> str;
    int l;
    l=str.size();
    checkpallindrome(0,str,l);
    return 0;
}