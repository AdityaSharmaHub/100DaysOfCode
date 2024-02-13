#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;

// Minimum characters to be added at front to make string palindrome
// Problem Link - https://www.geeksforgeeks.org/problems/minimum-characters-to-be-added-at-front-to-make-string-palindrome/1?page=1&difficulty

// For example - aabc
// Step 1: Reverse the string - cbaa
// Step 2: Add $ to the string - cbaa$
// Step 3: Add Reverse String to the string (It will look like - aabc$cbaa)
// Step 4: Find LPS of the string

int minChar(string str){
        
    // Step 1: Reverse the string
    string rev = str;
    reverse(rev.begin(),rev.end());
    int size = str.size(); 
    
    // Step 2: Add $ to the string
    str += '$';
    
    // Step 3: Add reverse string to the original string
    str += rev;
    
    // Step 4: Find LPS of the string
    int n = str.size(); // updated size
    vector<int>lps(n,0);
    
    int prefix = 0, suffix = 1;
    
    while(suffix < str.size())
    {
        // If characters are matched
        if(str[prefix] == str[suffix])
        {
            lps[suffix] = prefix + 1;
            prefix++, suffix++;
        }
        // If characters are not matched
        else
        {
            if(prefix == 0)
            {
                suffix++;
            }
            else
            {
                prefix = lps[prefix - 1];
            }
        }
    }
    
    return size - lps[n - 1];
}

int main()
{
    
    return 0;
}