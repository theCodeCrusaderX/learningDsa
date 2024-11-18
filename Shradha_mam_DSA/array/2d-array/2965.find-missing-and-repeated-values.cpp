
time complexity O(m*n)
space complexity O(m*n)

class Solution {
public:
    vector<int> findMissingAndRepeatedValues(vector<vector<int>>& grid) {
        unordered_map<int,int> mpp;
        vector<int> ans;

        for(int i=0;i<grid.size();i++) {
            for(int j=0; j<grid[0].size(); j++) {
                mpp[grid[i][j]]++;
            }
        }
        int repeated = -1;
        int missing = -1;

        for(int i=1; i<=(grid.size()*grid[0].size()); i++) {
            if(mpp[i] == 2) {
                repeated = i;
            }
            if(mpp[i] == 0) {
                missing = i;
            }
        }
        ans.push_back(repeated);
        ans.push_back(missing);

        return ans;
    }
};

 
time complexity O(n*n)
space complexity O(n*n)

class Solution {
public:
    vector<int> findMissingAndRepeatedValues(vector<vector<int>>& grid) {
        int n = grid.size();
        vector<int> ans;
        set<int> st;

        int actualSum = 0;
        int a,b;

        for(int i=0; i<n; i++) {
            for(int j=0; j<n; j++) {
                actualSum += grid[i][j];

                if(st.find(grid[i][j]) != st.end()) {
                    a = grid[i][j];
                    ans.push_back(a);
                }
                
                st.insert(grid[i][j]);
            }
        }

        int expectedSum =  (n*n)*((n*n)+1)/2;
        b = expectedSum - (actualSum - a);

        ans.push_back(b);

        return ans;

    }
};