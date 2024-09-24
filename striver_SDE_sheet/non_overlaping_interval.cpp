class Solution {
public:
    int eraseOverlapIntervals(vector<vector<int>>& intervals) {
        sort(intervals.begin(),intervals.end());

        int n= intervals.size();
        int count = 0;
        int i=0;
        int j=1;
        while(j<n)
        {
            vector<int> curr_indx = intervals[i];
            vector<int> next_indx = intervals[j];

            int cs = intervals[i][0];
            int ce = intervals[i][1];

            int ns = intervals[j][0];
            int ne = intervals[j][1];

            if(ce <= ns)
            {
                i=j;
                j++;
            }
            else if(ce <= ne)
            {
                j++;
                count++;
            }
            else if(ce > ne)
            {
                i=j;
                j++;
                count++;
            }

        }
        return count;
    }
};