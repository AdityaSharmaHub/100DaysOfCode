#include<iostream>
#include<vector>
using namespace std;

int main()
{
    int n;
    cout<<"Enter the size of the array: ";
    cin>>n;
    int arr[1000];

    cout<<"Enter the elements: ";
    for(int i=0; i<n; i++)
    cin>>arr[i];

    cout<<"1 size: ";
    for(int i=0; i<n; i++)
    {
        cout<<arr[i]<<" ";
    }

    cout<<endl;
    cout<<"2 size: ";
    for(int i=0; i<n-1; i++)
    {
        cout<<arr[i]<<arr[i+1]<<" ";
    }

    cout<<endl;
    cout<<"3 size: ";
    for(int i=0; i<n-2; i++)
    {
        cout<<arr[i]<<arr[i+1]<<arr[i+2]<<" ";
    }

    cout<<endl;
    cout<<"4 size: ";
    for(int i=0; i<n-3; i++)
    {
        cout<<arr[i]<<arr[i+1]<<arr[i+2]<<arr[i+3]<<" ";
    }

    return 0;
}