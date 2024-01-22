//count the number of characters in an string using hashing


#include<bits/stdc++.h>
using namespace std;

int main() {
    string s;
    cin >> s;
    char ch = 'a';

    //pre compute
    int hash[26] = {0};
    for(int i=0;i<s.size();i++) {
        hash[s[i] - ch] += 1;
    }

    int q;
    cin >> q;
    while(q--) {
        char hashindex;
        cin >> hashindex;

        //fetch
        cout << hash[hashindex - ch] << endl;
    }   
    return 0;
}