
Input: nums = [0,0,1,1,1,2,2,3,3,4]
Output: 5, nums = [0,1,2,3,4,_,_,_,_,_]





















BRUTE FORCE APPROACH:

TIME COMPLEXITY O(n logn)
EXTRA SPACE COMPLEXITY O(K) //WHERE K IS THE NO OF UNIQUE ELEMENTS

class Solution {
public:
    int removeDuplicates(vector<int>& nums) {
        set<int> st;
        for(int i=0;i<nums.size();i++)
        {
            st.insert(nums[i]);     //insertion ka time complexity is O(log n)
        }

        int i=0;
        for(auto it : st)
        {
            nums[i++] = it;
        }

        return i;
    }
};



#include <iostream>
#include <bits/stdc++.h>
using namespace std;
int main() {
    vector<int> arr = {5,1,2,2,10,3,1,4,5};
    unordered_map<int,int> mpp;
    
    for(auto it : arr)
    {
        mpp[it]++;     //in avg or best it will take O(1)
    }
    
    for(auto it : mpp)
    {
        cout << "key " << it.first << "value " << it.second << endl;
    }
    
    return 0;
}



OPTIMAL APPROACH:  TWO POINTER APPROACH

TIME COMPLEXITY: O(N)
EXTRA SPACE COMPLEXITY : O(1)

class Solution {
public:
    int removeDuplicates(vector<int>& nums) {
        int i=0;
        for(int j=1;j<nums.size();j++)
        {
            if(nums[i] != nums[j])
            {
                i++;
                if(i != j) swap(nums[i],nums[j]);
            }
        }
        return i+1;
    }
};