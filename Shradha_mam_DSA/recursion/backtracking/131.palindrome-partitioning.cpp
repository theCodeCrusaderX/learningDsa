class Solution {
public:
    bool isPallin(string part) {  //abcba
        int st = 0;
        int end = part.size()-1;

        while(st <= end) {
            if(part[st] != part[end]) {
                return false;
            }
            st++;
            end--;
        }
        return true;
    }
    void helper(string s, vector<string> &temp, vector<vector<string>> &ans) {
        int n = s.size();
        if(s == "") {
            ans.push_back(temp);
            return;
        }

        for(int i=0; i<n; i++) {
            string part = s.substr(0,i+1);  //abc
            if(isPallin(part)) {
                temp.push_back(part);
                helper(s.substr(i+1),temp,ans);
                temp.pop_back();  //backtraking step to clear temp
            }
        }
    }

    vector<vector<string>> partition(string s) {
        vector<string> temp;
        vector<vector<string>> ans;
        helper(s,temp,ans);
        return ans;
    }
};