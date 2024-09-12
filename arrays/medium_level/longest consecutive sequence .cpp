brute force approach :

time complexity is O(n^3)

bool linearSearch(vector<int>& nums,int num)
{
    for(int i=0;i<nums.size();i++)
    {
        if(num == nums[i]) return true;
    }
    return false;
}

int longestSuccessiveElements(vector<int>& nums) {
    int n = nums.size();
    int longest =1;
    for(int i=0;i<n;i++)
    {
        int x = nums[i];
        int count = 1;
        while(linearSearch(nums,x+1) == true)
        {
            x+=1;
            count+=1;
        }
        
        longest = max(longest,count);
    }
    return longest;
    
}

int main()
{
    
    vector<int> nums = {100, 200, 1, 2, 3, 4};
    int ans = longestSuccessiveElements(nums);
    cout << "The longest consecutive sequence is " << ans << "\n";
    return 0;
}

//===================================================================================

better solution :
time complexity is O(nlogn)

int longestSuccessiveElements(vector<int>& nums) {
    int n = nums.size();
    int longest =1;
    int count = 1;
    for(int i=0;i<n-1;i++)
    {
        if(nums[i+1] - nums[i] == 1)
        {
            count+=1;
        }else {
          count =1;
        }
        
        longest = max(longest,count);
    }
    return longest;
    
}

int main()
{
    
    vector<int> nums = {100, 200, 1, 2, 3, 4};
    sort(nums.begin(),nums.end());
    int ans = longestSuccessiveElements(nums);
    cout << "The longest consecutive sequence is " << ans << "\n";
    return 0;
}

optimal solution:
time complexity is O(n) + O(n+2n) === O(n)
space complexity is O(n)


int longestSuccessiveElements(vector<int>& nums) {
    int n = nums.size();
    unordered_set<int> st;
    int longest = 0;
    for(auto it : nums)
    {
        st.insert(it);
    }
    
    for(auto it : st)
    {
        if(st.find(it-1) == st.end())
        {
            int x = it;
            int count = 1;
            while(st.find(x+1) != st.end())
            {
                x=x+1;
                count +=1;
            }
            longest = max(longest, count);
        }
    }
    
    

    return longest;
    
}


int main()
{
    
    vector<int> nums = {100, 101, 1, 2, 3, 4};
    int ans = longestSuccessiveElements(nums);
    cout << "The longest consecutive sequence is " << ans << "\n";
    return 0;
}