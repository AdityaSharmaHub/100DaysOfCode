#include<iostream>
#include<vector>
using namespace std;

// Problem Link - https://www.geeksforgeeks.org/problems/sort-a-string2943/1

string sort(string s){
    //complete the function here
    vector<int>alpha(26, 0);
    int n = s.size();
    
    for(int i=0; i<n; i++)
    {
        alpha[s[i] - 'a']++;
    }
    
    string ans;
    
    for(int i=0; i<26; i++)
    {
        char c = 'a' + i;
        while(alpha[i])
        {
            ans += c;
            alpha[i]--;
        }
    }
    
    return ans;
}

int main()
{
    
    return 0;
}