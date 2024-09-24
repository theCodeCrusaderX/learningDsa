brute force approach 
time complexity is O(n^2)
extra space complexity is O(1)

#include <bits/stdc++.h>
int majorityElement(vector<int> v) {
	// Write your code here
	int n=v.size();
	for(int i=0;i<n;i++)
	{
		int count =0;
		for(int j=0;j<n;j++)
		{
			if(v[i] == v[j])
			{
				count++;
			}
		}
		if(count > n/2)
		{
			return v[i];
		}
	}
}

better approach 
map data structure 
time complexity is O(nlogn) + O(n)
extra space complexity is O(k) where k is the no of elements in the map ds 

#include <bits/stdc++.h>
int majorityElement(vector<int> v) {
	// Write your code here
	int n=v.size();
	map<int,int> mpp;
    for(int i=0;i<n;i++)
    {
        mpp[v[i]]++;
    }

    for(auto it : mpp)
    {
        if(it.second >= n/2) return it.first;
    }
}

optimal approach 
moors voting algorithm
time complexity O(n)
extra space complexity O(1)


class Solution {
public:
    int majorityElement(vector<int>& nums) {
        int n = nums.size();
        int count =0;
        int ele;
        for(int i=0;i<n;i++)
        {
            if(count == 0)
            {
                ele = nums[i];
                count++;
            }
            else if(nums[i] == ele) count++;
            else count--;
        }

        int occurTime = 0;
        for(int i=0;i<n;i++)
        {
            if(nums[i] == ele) occurTime++;
        }

        if(occurTime > n/2) return ele;
        return -1;
    }
};
