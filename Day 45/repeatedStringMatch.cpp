#include<iostream>
#include<vector>
using namespace std;

// 686. Repeated String Match
// Problem Link - https://leetcode.com/problems/repeated-string-match/description/

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

int KMP_MATCH(string haystack, string needle) {
    
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
    return 1;

    return 0;
}


int repeatedStringMatch(string a, string b) {
    if(a == b)
    return 1;

    int repeat = 1;
    string temp = a;

    while(temp.size() < b.size())
    {
        temp += a;
        repeat++;
    }

    // KMP Pattern Search
    if(KMP_MATCH(temp, b) == 1)
    return repeat;

    // Temp + a, KMP Search
    if(KMP_MATCH(temp + a, b) == 1)
    return repeat + 1;


    return -1;
}

int main()
{
    
    return 0;
}