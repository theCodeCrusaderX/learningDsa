#include<bits/stdc++.h>
using namespace std;

int largestEle(vector<int> &v,int n)
{
    int temp_lar = v[0];
    for(int i=0;i<n;i++)
    {
        if(temp_lar < v[i])
        {
            temp_lar = v[i];
        }
    }
    return temp_lar;
}

int secLargestEle(vector<int> v,int n)
{
    int largest = largestEle(v,n);
    int temp_secLar = v[0];
    for(int i=0;i<n;i++)
    {
        if(v[i] != largest && temp_secLar < v[i])
        {
            temp_secLar = v[i];
        }
    }
    return temp_secLar;
}

    int missingNumber(vector<int>& nums) {
        int n1 = nums.size();
        sort(nums.begin(), nums.end());
        for(int i=0; i<=n1; i++)
        {
            if(nums[i] != i)
            {
                return i;
            }
        }
        return -1;
    }


int main()
{
    vector<int> v = {0,1,2,4,5};
    int n = v.size();
    cout << "largest element is " << largestEle(v,n) << endl;
    cout << "second largest element is " << secLargestEle(v,n) << endl;
    cout << "missing no is " << missingNumber(v) << endl;
    return 0;
}