#include<iostream>
using namespace std;

int main()
{
    // Print size of the string

    string s = "Good Day";
    int size = 0;

    while(s[size] != '\0')
    {
        size++;
    }
    cout<<size<<" ";

    return 0;
}