

// also try to solve this usign unordered_map insted of freq arr or windFreq arr 

//sliding window :)

class Solution {
public:

    bool isFreqEqual(int freq1[],int freq2[])
    {
        for(int i=0; i<26; i++)
        {
            if(freq1[i] != freq2[i]) {
                return false;
            }
        }

        return true;
    }

    bool checkInclusion(string s1, string s2) {
        int freq[26] = {0};

        //no of occurence of each char in freq arr;
        for(int i=0; i<s1.length(); i++)
        {
            freq[s1[i] - 'a']++;
        }

        int windSize = s1.length();

        for(int i=0; i<s2.length(); i++)
        {
            int windFreq[26] = {0};
            int windIdx = 0;
            int idx = i;

            while(windIdx < windSize && idx < s2.length())
            {
                windFreq[s2[idx] - 'a']++;
                windIdx++;
                idx++;
            }

            if(isFreqEqual(freq,windFreq)) {
                return true;
            } 
        }

        return false;
    }
};