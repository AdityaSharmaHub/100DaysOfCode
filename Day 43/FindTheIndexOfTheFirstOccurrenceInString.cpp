#include<iostream>
#include<vector>
using namespace std;

// 28. Find the Index of the First Occurrence in a String
// Problem Link - https://leetcode.com/problems/find-the-index-of-the-first-occurrence-in-a-string/description/

void lpsfind(vector<int>&lps, string s) {
    // Your code goes here
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
}

int strStr(string haystack, string needle) {
    
    vector<int>lps(needle.size(),0);
    lpsfind(lps,needle);

    int first = 0, second = 0;

    while(first < haystack.size() && second < needle.size())
    {
        // if matched
        if(haystack[first] == needle[second])
        {
            first++, second++;
        }
        // if not matched
        else
        {
            if(second == 0)
            first++;
            else 
            second = lps[second - 1];
        }
    }

    // if ans exists
    if(second == needle.size())
    return first - second;

    return -1;
}

int main()
{
    
    return 0;
}