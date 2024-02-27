#include<iostream>
using namespace std;

// Reverse a string
// NOTE - Make sure to pass the string as reference otherwise no changes will be done

void reverseString(string &str, int start, int end)
{
    if(start >= end) // base condition
    return;

    char c = str[start];
    str[start] = str[end];
    str[end] = c;
    reverseString(str, start+1, end-1);
}

int main()
{
    string str;
    cout<<"Enter the string: ";
    cin>>str;
    reverseString(str, 0, 5);
    cout<<"Reversed String: "<<str;
    return 0;
}