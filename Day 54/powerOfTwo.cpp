#include<iostream>
using namespace std;

// Power of two (2)

int power(int num, int n)
{
    if(n == 0)
    return 1;

    return num * power(num, n-1);
}

int main()
{
    int n;
    cout<<"Enter the power: ";
    cin>>n;

    cout<<"Power of 2 raise to "<<n<<" is: "<<power(2,n);
    return 0;
}