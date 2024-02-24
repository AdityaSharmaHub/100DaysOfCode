#include<iostream>
using namespace std;

// Sum of Square of N natural numbers

int sqSum(int n)
{
    if(n == 1)
    return 1;

    return n*n + sqSum(n-1);
}

int main()
{
    int n;
    cout<<"Enter the num: ";
    cin>>n;

    cout<<"Square sum: "<<sqSum(n);
    return 0;
}