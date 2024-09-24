// brute force approach 
1. generate all the possible permuattion in the required order
2. linear search
3. next permutation

time complexity N!*N 




What does lexicographically greater mean?

If the first element of a sequence A is less than the first element of a sequence B then A
is lexicographically less than B . Likewise, if the first element of A is greater than the
first element of B then A is lexicographically greater than B .





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

step 1. traversing from right and checking for the condition arr[i-1] < arr[i].

step 2. circle or mark the position (i-1)th and beyond its right finding the no. greater than
        arr[i-1] form left side.

step 3. swap them i.e arr[i-1] & the no. found 

step 4. reverse all the element after (i-1)th position

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