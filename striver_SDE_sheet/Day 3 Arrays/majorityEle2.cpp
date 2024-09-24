class Solution {
public:
    vector<int> majorityElement(vector<int>& nums) {
        int ele1 = NULL;
        int count1 = 0;

        int ele2 = NULL;
        int count2 = 0;

        int n = nums.size();

        for(int i=0; i<n; i++)
        {
            if(nums[i] == ele1)
            {
                count1++;
            }
            else if(nums[i] == ele2)
            {
                count2++;
            }
            else if(count1 == 0)
            {
                ele1 = nums[i];
                count1++;
            }
            else if(count2 == 0)
            {
                ele2 = nums[i];
                count2++;
            }
            else
            {
                count1--;
                count2--;
            }
        }

        vector<int> result;
        int occurT1=0;
        int occurT2=0;
        for(int i=0; i<n; i++)
        {
            if(nums[i] == ele1)
            {
                occurT1++;
            }
            else if(nums[i] == ele2) 
            {
                occurT2++;
            }
        }

        if(occurT1 > floor(n/3)) result.push_back(ele1);
        if(occurT2 > floor(n/3)) result.push_back(ele2);

        return result;
    }
};