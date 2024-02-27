#include<iostream>
using namespace std;

// Count Vowels in a string

int countVowel(string str, int index)
{
    if(index == -1) // base condition
    return 0;

    if(str[index] == 'a' || str[index] == 'e' || str[index] == 'i' || str[index] == 'o' || str[index] == 'u')
    return 1 + countVowel(str, index-1);
    else
    return countVowel(str, index-1);
}

int main()
{
    string str;
    cout<<" "<<endl;
    cout<<"Enter the string: ";
    cin>>str;
    int size = str.size() - 1;
    cout<<"No of vowels: "<<countVowel(str, size)<<endl;
    cout<<" "<<endl;
    return 0;
}