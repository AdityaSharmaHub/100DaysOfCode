#include<iostream>
#include<vector>
using namespace std;

// Problem Link - https://leetcode.com/problems/check-if-the-sentence-is-pangram/

bool checkIfPangram(string sentence) {
        
    vector<bool>alphabets(26,0);
    int n = sentence.size();

    for(int i=0; i<n; i++)
    {
        alphabets[sentence[i] - 'a'] = 1;
    }

    for(int i=0; i<26; i++)
    {
        if(alphabets[i] == 0)
        return 0;
    }

    return 1;
}

int main()
{
    
    return 0;
}