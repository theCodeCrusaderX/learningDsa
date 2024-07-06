
Note: 
A sorted array is not considered as sorted and rotated, 
i.e., there should be at least one rotation

basic points :

if the given problem is rotated and sorted array then exclude { inversion ==0 --> true } 

1) inversions == 0 ---> true
2) inversion == 1 && arr[n-1] <= arr[0]  ---> true   //main logic
3) else false

CODE :--

class Solution {
public:

    bool check(vector<int>& nums) {

        int inversion = 0;
        int n=nums.size();
        for(int i=0;i<n-1;i++)
        {
            if(nums[i] > nums[i+1]) inversion++;
        }
        
        if(inversion == 0) return true;   //exclude this line if you wana check both rotated and sorted

        else if (inversion == 1 && nums[n-1] <= nums[0]) return true;

        else return false;
    }
};