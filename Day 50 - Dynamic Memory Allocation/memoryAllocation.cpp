#include<iostream>
using namespace std;

int main()
{
    // Allocating variable in dynamic (heap) memory
    int *ptr = new int;
    *ptr = 5; // Value assign
    cout<<"Int value: "<<*ptr<<endl; // Print value
    cout<<"Address of int: "<<ptr<<endl; // Print address

    float *ptr2 = new float;
    *ptr2 = 3.6; // Value assign
    cout<<"Float value: "<<*ptr2<<endl; // Print value
    cout<<"Address of float: "<<ptr2<<endl; // Print address

    int n;
    cout<<"Enter the size of array: ";
    cin>>n;

    int *p = new int[n];

    // Add values
    for(int i=0; i<n; i++)
    p[i] = i+1;

    // Print values
    for(int i=0; i<n; i++)
    cout<<p[i]<<" ";

    // Delete variables from memory
    delete ptr;
    delete ptr2;
    delete [] p;

    return 0;
}