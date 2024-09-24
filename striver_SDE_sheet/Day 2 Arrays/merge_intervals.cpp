class Solution {
public:
    vector<vector<int>> merge(vector<vector<int>>& intervals) {
        vector<vector<int>> temp;
        sort(intervals.begin(),intervals.end());

        vector<int> curr_interval = intervals[0];
        for(int i=1; i<intervals.size(); i++)
        {
            if(curr_interval[1] >= intervals[i][0])
            {
                curr_interval[1] = max(curr_interval[1],intervals[i][1]);
            }
            else{
                temp.push_back(curr_interval);
                curr_interval = intervals[i];
            }
        }
        temp.push_back(curr_interval);

        return temp;
    }
};