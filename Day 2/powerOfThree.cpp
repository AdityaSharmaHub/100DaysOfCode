#include<iostream>
using namespace std;

bool isPowerOfThree(int n) {
    // if (n <= 0)
    //     return false;

    // while (n % 3 == 0) {
    //     n /= 3;
    // }

    // return n == 1;
    return (n > 0) && (1162261467 % n == 0);
}

int main()
{
    int x;
    cout<<"Enter the number: ";
    cin>>x;

    cout<<isPowerOfThree(x);
    return 0;
}