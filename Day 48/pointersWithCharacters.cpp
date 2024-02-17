#include<iostream>
using namespace std;

int main()
{
    char arr[5] = "1234";
    char *ptr = arr;

    cout<<arr<<endl; // This will print all the values (1234)
    cout<<ptr<<endl; // This will print all the values (1234)

    cout<<(void*)arr<<endl; // This will print the address of the 0th index
    cout<<(void*)ptr<<endl; // This will print the address of the 0th index 

    char name = 'a';
    cout<<(void*)&name; // This will print the address

    // (void*)arr;
    // OR 
    // static_cast<void*>(arr);

    // *ptr
    // OR
    // ptr[]
    
    return 0;
}