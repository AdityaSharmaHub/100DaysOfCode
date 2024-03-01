#include<iostream>
using namespace std;

int main()
{
    string s = "naman";
    int start = 0, end = s.size()-1;
    
    while(start < end)
    {
        if(s[start] != s[end])
        {
            cout<<"Not a Palindrome";
            return 0;
        }
        else
        {
            start++, end--;
        }
    }

    cout<<"It is a Palindrome";
    return 0;
}