#include<iostream>
#include<vector>
using namespace std;

// 2758. Sort Vowels in a String
// Problem Link - https://leetcode.com/problems/sort-vowels-in-a-string/

string sortVowels(string s) {
        
    vector<int>lower(26,0);
    vector<int>upper(26,0);

    for(int i=0; i<s.size(); i++)
    {
        // lower
        if(s[i] == 'a' || s[i] == 'e' || s[i] == 'i' || s[i] == 'o' || s[i] == 'u')
        {
            lower[s[i] - 'a']++;
            s[i] = '#';
        }
        // upper
        else if(s[i] == 'A' || s[i] == 'E' || s[i] == 'I' || s[i] == 'O' || s[i] == 'U')
        {
            upper[s[i] - 'A']++;
            s[i] = '#';
        }
    }

    string vowel;

    // upper
    for(int i=0; i<26; i++)
    {
        char c = 'A' + i;
        while(upper[i])
        {
            vowel += c;
            upper[i]--;
        }
    }

    // lower
    for(int i=0; i<26; i++)
    {
        char c = 'a' + i;
        while(lower[i])
        {
            vowel += c;
            lower[i]--;
        }
    }


    int first = 0, second = 0; // second is pointing to vowel and first is pointing to s
    
    while(second < vowel.size())
    {
        if(s[first] == '#')
        {
            s[first] = vowel[second];
            second++;
        }

        first++;
    }

    return s;

}

int main()
{
    
    return 0;
}