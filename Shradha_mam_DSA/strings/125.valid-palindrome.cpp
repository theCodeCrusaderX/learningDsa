class Solution {
public:
    bool isAlphaNum(char ch) 
        {
            if(ch >= '0' && ch <= '9' || ch >= 'a' && ch <= 'z') return true;
            else return false;
        }

    bool isPalindrome(string s) {
        int st =0;
        int end = s.size()-1;

        while(st < end)
        {
            if(!isAlphaNum(tolower(s[st]))) {
                st++;
                continue;
            }
            if(!isAlphaNum(tolower(s[end]))) {
                end--;
                continue;
            }

            if(tolower(s[st]) != tolower(s[end])) return false;

            st++;
            end--;
        }

        return true;
    }
};


note::
  
  there is a inbuilt funtion in c++ to check wheater a char is alphanumaric or not 

  #include <cwctype>

  iswalnum()  return 0 is not or return ch if yes