#include<iostream>
#include<vector>
using namespace std;

// 3. Longest Substring Without Repeating Characters
// Problem Link - https://leetcode.com/problems/longest-substring-without-repeating-characters/description/

int lengthOfLongestSubstring(string s)
{
    vector<bool>count(256,0);
    int first = 0, second = 0, len = 0;

    while(second < s.size())
    {
        // Repeating Characters
        while(count[s[second]])
        {
            count[s[first]] = 0;
            first++;
        }
        count[s[second]] = 1;

        len = max(len, second-first+1);
        second++;
    }

    return len;
}

int main()
{
    
    return 0;
}