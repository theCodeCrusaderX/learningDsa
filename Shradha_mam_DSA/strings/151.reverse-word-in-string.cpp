class Solution {
public:
    string reverseWords(string s) {
        stack<string> stk;  //O(s.length()) -> O(n)
        string temp = "";

        for(auto ch : s)   //O(n)
        {
            if(ch != ' ')
            {
                temp += ch;
            }

            if(ch == ' ' && temp != "")
            {
                stk.push(temp);
                temp = "";
            }
        }

        // Push the last word if it's not empty
        if (temp != "") {
            stk.push(temp);
        }

        string ans;

        while(!stk.empty())  //O(<<<n)
        {
            ans += stk.top();
            stk.pop();

            if(!stk.empty()) {
                ans += ' ';
            }
        }

        return ans;
    }
};


// optimal Solution:

// Intuition
// look the string given to u carefully u will figure out that this problem can be done using reverse stl method :)

// Approach
// first u need to reverse whole string
// and then the saparate word that u need to reverse look my code u will figure it out how i did :)
// Complexity
// Time complexity:
// O(n)

// Space complexity:
// O(1)


class Solution {
public:
    string reverseWords(string s) {
        //reverse the whole string 
        reverse(s.begin(),s.end());
        int n = s.size();

        string ans = "";


        for(int i=0; i<n; i++)
        {
            string word = "";
            while(i<n && s[i] != ' ')
            {
                word += s[i];
                i++;
            }

            // reverse separate word
            reverse(word.begin(),word.end());

            if(word.length() > 0) {
                ans += ' ' + word;
            }

        }
        
        return ans.substr(1);
    }
};