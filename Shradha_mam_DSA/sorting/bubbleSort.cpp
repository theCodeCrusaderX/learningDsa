#include <iostream>
#include <vector>
using namespace std;

void bubbleSort(vector<int> &a)
{
    int n = a.size();
    int k = n-2;
    while(k >=0)
    {
        for(int i=0;i<=k;i++)
        {
            if(a[i]>a[i+1]) swap(a[i],a[i+1]);
        }
        k--;
    }
}

int main() {
    vector<int> vec = {42, 7, 13, 89, 23, 5, 31};
    cout << "before" << "\n";
    for(auto it : vec)
    {
        cout << it << " ";
    }
    bubbleSort(vec);
    cout << "\n" << "after" << "\n";
    for(auto it : vec)
    {
        cout << it << " ";
    }
    return 0;
}