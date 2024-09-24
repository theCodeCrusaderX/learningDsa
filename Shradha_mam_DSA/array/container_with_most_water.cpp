
there is a brute force approach too u can use  time complexity wll be O(n^2)




class Solution {
public:
    int maxArea(vector<int>& height) {
        int n = height.size();
        int mini = 0;
        int area = 0;
        int maxi = 0;
        int left = 0;
        int right = n - 1;
        while (left < right) {
            mini = min(height[left], height[right]);
            area = mini * (right - left);
            maxi = max(maxi, area);

            height[left] < height[right] ? left++ : right--;
        }
        return maxi;
    }
};