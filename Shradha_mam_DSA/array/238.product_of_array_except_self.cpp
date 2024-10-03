brute force approach:--
vector<int> vec(n,1);

for(int i=0;i<n;i++)
{
  for(int j=0;j<n;j++)
  {
    if(j!=i)
    {
      vec[i]*=nums[i];
    }
  }
}

return vec;


better solution:--
class Solution {
public:
    vector<int> productExceptSelf(vector<int>& nums) {
        int n = nums.size();

        vector<int> res(n,1);
        vector<int> prefix(n,1);
        vector<int> suffix(n,1);

        for(int i=1; i<n; i++)
        {
            prefix[i] = prefix[i-1]*nums[i-1];
        }

        for(int i=n-2; i>=0; i--)
        {
            suffix[i] = suffix[i+1]*nums[i+1];
        }

        for(int i=0; i<n; i++)
        {
            res[i] = prefix[i]*suffix[i];
        }

        return res;
    }
};

optimal solution:--

class Solution {
public:
    vector<int> productExceptSelf(vector<int>& nums) {
        int n = nums.size();
        vector<int> res(n,1);

        for(int i=1; i<n; i++)
        {
            res[i] = res[i-1]*nums[i-1];
        }

        int suffix = 1;
        for(int i=n-2; i>=0; i--)
        {
            suffix*=nums[i+1];
            res[i] *= suffix;
        }

        return res;
    }
};
