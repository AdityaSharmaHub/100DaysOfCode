#include<iostream>
using namespace std;

// Lowercase to Uppercase conversion

void lowerToUpper(string &str, int index)
{
    if(index == -1) // base condition
    return;

    char c = 'A' + str[index] - 'a';
    str[index] = c;

    lowerToUpper(str, index - 1);
}

int main()
{
    string str = "aditya";
    lowerToUpper(str, str.size()-1);
    cout<<str;
    return 0;
}