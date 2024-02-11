#include<iostream>
#include<vector>
using namespace std;

// Longest Prefix Suffix - https://www.geeksforgeeks.org/problems/longest-prefix-suffix2527/1

int lps(string s) {
    // Your code goes here
    
    vector<int>lps(s.size(),0);
    int pre=0, suf=1;
    
    while(suf < s.size())
    {
        // match
        if(s[pre] == s[suf])
        {
            lps[suf] = pre + 1;
            suf++, pre++;
        }
        //not matched
        else
        {
            if(pre == 0)
            {
                lps[suf] = 0;
                suf++;
            }
            else
            {
                pre = lps[pre - 1];
            }
        }
        
    }
    
    return lps[s.size() - 1];
}

int main()
{
    
    return 0;
}