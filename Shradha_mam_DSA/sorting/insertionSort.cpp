#include <iostream>
#include <vector>
using namespace std;

void insertionSort(vector<int> &a)
{
    int n = a.size();
    for(int i=1; i<n; i++)
    {
      int curr = arr[i];
      int prev = i-1;

      while(prev >= 0 && arr[prev] > curr) 
      {
        arr[prev+1] = arr[prev];
        prev--;
      }

      arr[prev+1] = curr; //placing the curr ele in its correct position
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