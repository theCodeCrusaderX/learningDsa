brute force approach :-
time complexity O(nlogn)
space complexity O(n)

class Solution {
public:
    void sortColors(vector<int>& nums) {
        sort(nums.begin(), nums.end());
    }
};

better approach:--
time complexity O(2n)
extra space complexity O(1)

#include <bits/stdc++.h> 
void sortArray(vector<int>& arr, int n)
{
    // Write your code here
    int c1=0,c2=0,c3=0;
    for(int i=0;i<n;i++)
    {
        if(arr[i] == 0) c1++;
        else if(arr[i] == 1) c2++;
        else c3++;
    }
    for(int i=0;i<c1;i++) arr[i] = 0;
    for(int i=c1;i<c1+c2;i++) arr[i] =1;
    for(int i=c1+c2;i<n;i++) arr[i] =2;
}

optimal approach :--
Dutch national flag Algorithm
time complexity O(n)
extra space complexity O(1)

#include <bits/stdc++.h> 
void sortArray(vector<int>& arr, int n)
{
    // Write your code here
    int low=0;
    int mid=0;
    int high =n-1;
    while(mid <= high)
    {
        if(arr[mid] ==0)
        {
            swap(arr[low],arr[mid]);
            mid++;
            low++;
        }
        else if(arr[mid] ==1) mid++;
        else 
        {
            swap(arr[mid], arr[high]);
            high--;
        }
    }

}
