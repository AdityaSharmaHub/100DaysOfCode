#include<iostream>
using namespace std;

int main()
{
    int a = 10;
    cout<<&a<<endl; // This will print the address of variable 'a'

    int *ptr = &a;
    cout<<ptr<<endl; // Similar approach to print address of 'a'

    float b = 3.55;
    float *ptr1 = &b;
    cout<<ptr1<<endl; // Taking an example of float


    // Print value on a specific address
    cout<<*ptr<<endl; 

    return 0;
}