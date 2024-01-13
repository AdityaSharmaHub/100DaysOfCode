#include<iostream>
using namespace std;

bool isPerfectSquare(int num) {
    int start = 1, end = num;
    long long mid;

    while(start <= end)
    {
        mid = start + (end - start) / 2;
        if(mid * mid == num)
        return true;
        else if(mid * mid > num)
        end = mid - 1;
        else
        start = mid + 1;
    }

    return false;
}

int main()
{
    int num=16;
    cout<<isPerfectSquare(num);
    return 0;
}