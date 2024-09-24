brute force :
timpe complexity : O(nlogn)

using sort() method;

optimal approach:
// method 1

time complexiy O(2n) === O(n)
space complexity O(1)

class Solution {
public:
    void sortColors(vector<int>& nums) {
        //inialise all variable
        int zero =0;
        int one =0;
        int two =0;
        int n=nums.size();

        //count no of zeros ones and twos
        for(int i=0;i<n;i++)
        {
            if(nums[i] == 0) zero++;
            else if(nums[i] ==1) one++;
            else two++;
        }

        //fill them in an order
        for(int i=0;i<zero;i++)
        {
            nums[i] = 0;
        }

        for(int i=zero;i<zero+one;i++)
        {
            nums[i] = 1;
        }

        for(int i=zero+one;i<n;i++)
        {
            nums[i] = 2;
        }
    }
};

// method 2

class Solution {
public:
    void sortColors(vector<int>& nums) {
        int n =nums.size();

        int i=0; //denoting for zeroes
        int j=0; // denoting for ones
        int k=n-1; //denoting for twos

        while(j<=k)    //must
        {
            if(nums[j] == 0)
            {
                swap(nums[j],nums[i]);
                i++;
                j++;
            }else if(nums[j] == 1)
            {
                j++;
            }else
            {
                swap(nums[j],nums[k]);
                k--;
            }
        }
    }
};