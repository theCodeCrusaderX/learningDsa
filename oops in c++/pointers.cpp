#include <iostream>
using namespace std;
int main() {
    // Write C++ code here
    int a = 10;
    int *p = &a;
    cout << "add of p  :: " << p << endl;
    cout << "val at p  :: " << *p << endl;

    int **k = &p;

    cout << "add of k  :: " << k << endl;
    cout << "val at k  :: " << *k << endl;
    cout << "val(val at k)  :: " << **k << endl;

    return 0;
}