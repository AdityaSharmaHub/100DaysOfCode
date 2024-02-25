#include<iostream>
using namespace std;

int fibo(int num)
{
    if(num == 0)
    return 0;
    else if(num == 1)
    return 1;

    return fibo(num - 1) + fibo(num - 2);
}

int main()
{
    int n = 4;
    cout<<"Fibonacci of first "<<n<<" numbers is: "<<fibo(n);
    return 0;
}