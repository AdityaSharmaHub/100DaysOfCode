#include<iostream>
using namespace std;

// Factorial of a given number

int calculateFactorial(int num)
{
    if(num == 0 || num == 1)
    return 1;
    else
    return num * calculateFactorial(num - 1);
}

int main()
{
    int num, ans;
    cout<<"Enter the number: ";
    cin>>num;

    ans = calculateFactorial(num);
    cout<<"Factorial: "<<ans<<endl;
    return 0;
}