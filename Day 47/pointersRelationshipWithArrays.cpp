#include<iostream>
using namespace std;

int main()
{
    int arr[5] = {1,2,3,4,5};
    int *ptr = arr;

    // Print the address of the first element or 0th index
    cout<<arr<<endl;
    cout<<arr+0<<endl;
    cout<<&arr[0]<<endl;
    cout<<ptr<<endl;

    // Print the address of the second element or 1st index
    cout<<arr+1<<endl;
    cout<<&arr[1]<<endl;   

    // Print the value of first element or 0th index
    cout<<arr[0]<<endl;
    cout<<*arr<<endl;
    cout<<*(arr+0)<<endl;
    cout<<*ptr<<endl;

    // Print address of every element 
    for(int i=0; i<5; i++)
    cout<<arr+i<<endl;

    // Print value of every element 
    for(int i=0; i<5; i++)
    cout<<*(arr+i)<<endl;

    return 0;
}