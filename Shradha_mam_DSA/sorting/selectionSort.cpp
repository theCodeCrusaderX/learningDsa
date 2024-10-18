// Online C++ compiler to run C++ program online
#include <iostream>
#include <vector>
#include <climits>
using namespace std;

void selectionSort(vector<int> &a)
{
    int n = a.size();
    int k = 0;
    
    while(k <= n - 2)
    {
        int miniInd = k;  // Initialize miniInd to current k
        
        // Find the index of the minimum element from the remaining unsorted part
        for(int i = k + 1; i < n; i++)
        {
            if(a[i] < a[miniInd]) {
                miniInd = i;
            }
        }
        
        // Swap the current element with the minimum element found
        if(miniInd != k) {
            swap(a[k], a[miniInd]);
        }
        
        k++;  // Move to the next position
    }
}


int main() {
    vector<int> vec = {13,46,24,52,20,9};
    cout << "before" << "\n";
    for(auto it : vec)
    {
        cout << it << " ";
    }
    selectionSort(vec);
    cout << "\n" << "after" << "\n";
    for(auto it : vec)
    {
        cout << it << " ";
    }
    return 0;
}