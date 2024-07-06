brute force approach 

time complexity O(n);
space complexity O(n);

class Solution {
public:
    vector<int> rearrangeArray(vector<int>& nums) {
        vector<int> v1;
        vector<int> v2;
        vector<int> result;
        int n = nums.size();
        for(int i=0;i<n;i++)
        {
            if(nums[i] > 0) v1.push_back(nums[i]);
            else v2.push_back(nums[i]);
        }

        for(int i=0;i<v1.size();i++)
        {
            result.push_back(v1[i]);
            result.push_back(v2[i]);
        }

        for(int i=0;i<n;i++)
        {
            nums[i] = result[i];
        }

        return nums;
    }
};


better Solution

replacing the result vector form above we can do 

the only thing is this we are using the given problem statement;

for(int i=0;i<n/2;i++)
{
  nums[i*2] = v1[i];
  nums[2*i+1] = v2[i];
}


// there might be a follow up a question that if the no of element in pos and neg are not 
//equal then use the brute force approach to solve that one 

v1 = [3,1,2,10]
v1 = [-2,-5,-4]

//note i is not here zero val of i is the left place of above i.e i=3

while(i < v1.size())                       
{
  result.push_back(v1[i]);
}

while(i < v2.size())
{
  result.push_back(v1[i]);
}