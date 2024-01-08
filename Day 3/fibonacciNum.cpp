#include<iostream>
using namespace std;

int fib(int n) {
    int arr[1000];
    arr[0]=0;
    arr[1]=1;

    if(n<0)
    return 0;

    for(int i=2; i<=n; i++) {
        arr[i] = arr[i-1] + arr[i-2];
    }

    return arr[n];
}

int main()
{
    int num;
    cout<<"Enter the number: ";
    cin>>num;
    cout<<fib(num);

    return 0;
}