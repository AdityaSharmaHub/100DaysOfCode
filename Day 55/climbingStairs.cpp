#include <iostream>
using namespace std;

// Will solve this using dynamic programming in future

int climbStairs(int n)
{
    // Using recursion it gives Error: Time Limit Exceeded
    // if(n<=1)
    // return 1;

    // return climbStairs(n-1) + climbStairs(n-2);

    // Hence solved using for loop
    int arr[1000];
    arr[0] = 1;
    arr[1] = 1;

    for (int i = 2; i <= n; i++)
    {
        arr[i] = arr[i - 1] + arr[i - 2];
    }

    return arr[n];
}

int main()
{
    int n = 5;
    cout<<climbStairs(n)<<" ways are there to take "<<n<<" steps";
    return 0;
}