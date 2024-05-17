see this is brute force approach because its taking (extra space which is O(n) (temp+arr)) in program 
and time complexity is nere about to O(n)

vector<int> moveZeros(int n, vector<int> a) {
    // Write your code here.
    vector<int> temp;
    vector<int> arr;
    for(int i=0;i<n;i++)
    {
        if(a[i] == 0) {
            temp.push_back(a[i]);
        }
        else
        {
            arr.push_back(a[i]);
        }
    }
    for(int i=0;i<temp.size();i++)
    {
        arr.push_back(temp[i]);
    }
    return arr;
}

method 2:-
better approach:
with time complexity is same but better in space complexity 
which is O(k) where k is no is none zero elements

vector<int> moveZeros(int n, vector<int> a) {
    // Write your code here.
    vector<int> temp;
    for(int i=0;i<a.size();i++)
    {
        if(a[i] !=0 )
        {
            temp.push_back(a[i]);
        }
    }

    for(int i=temp.size();i<a.size();i++)
    {
        temp.push_back(0);
    }
    return temp;

}


method 3:-
optimal approach:
with time complexity is same and extra space complexity 
is O(1) 

two pointer approach

#include <vector>
using namespace std;

class Solution {
public:
    void moveZeroes(vector<int>& nums) {
        int n = nums.size();
        if (n == 0) // Check if vector is empty
            return;
        
        int j = -1;  //place the pointer j:
        for (int i = 0; i < n; i++) {
            if (nums[i] == 0 && j == -1) {
                j = i;
            }
            if (nums[i] != 0 && j != -1) {
                if (i != j) { // Skip unnecessary swaps
                    swap(nums[i], nums[j]);
                }
                j++;
            }
        }
    }
};
