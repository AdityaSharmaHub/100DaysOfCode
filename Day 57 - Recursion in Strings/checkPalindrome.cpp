#include<iostream>
using namespace std;

// Check whether the string is palindrome or not

bool checkPalindrome(string str, int start, int end)
{
    if(start >= end) // base condition
    return 1;

    // if matched
    if(str[start] != str[end])
    return 0;

    // if not matched
    return checkPalindrome(str, start+1, end-1);
}

int main()
{
    string str;
    cout<<" "<<endl;
    cout<<"Enter the string: ";
    cin>>str;
    int size = str.size();
    
    if(checkPalindrome(str, 0, size-1) == 1)
    cout<<"Yes, it is a palindrome"<<endl;
    else
    cout<<"No, it is not a palindrome"<<endl;

    cout<<" "<<endl;

    return 0;
}