// brute force approach 
1. generate all the possible permuattion in the required order
2. linear search
3. next permutation

time complexity N!*N 


// better approach
in c++ we have inbuild library for finding the next permutation 

class Solution {
public:
    void nextPermutation(vector<int>& nums) {
        next_permutation(nums.begin(),nums.end());
    }
};

// optimal approach
Next Permutation:

Step 1: the traversing from right condition and checking for arr[i] < arr[i]

Step 2: Circle or its or mark the position (i-1)th and beyound its right finding the no. greater greater than arr[i-1] from left side .

Step 3: swap them i.e arr [i-1] & the no. found.

step 4: reverse all the element after (i-1)th position.

class Solution {
public:
    void nextPermutation(vector<int>& nums) {
        int n=nums.size();
        int circle = -1;
        for(int i=n-1;i>0;i--)
        {
           if(nums[i-1] < nums[i]) 
           {
               circle = i-1;
               break;
           }
           
        }

        if(circle != -1){
            for(int i=n-1;i>=circle+1;i--)
            {
                if(nums[i] > nums[circle])
                {
                    swap(nums[i],nums[circle]);
                    break;
                }
            }
        }



        reverse(nums.begin()+circle+1,nums.end());

    }
};