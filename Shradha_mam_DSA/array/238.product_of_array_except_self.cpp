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


optimal solution:--
