#include<iostream>
using namespace std;

bool isPowerOfFour(int n) {
    if (n <= 0) {
        return false;
    }

    while (n % 4 == 0) {
        n /= 4;
    }

    return n == 1;
}

int main()
{
    int n;
    cout<<"Enter the number: ";
    cin>>n;

    cout<<isPowerOfFour(n);
    return 0;
}