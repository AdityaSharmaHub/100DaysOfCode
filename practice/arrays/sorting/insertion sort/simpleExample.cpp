#include<iostream>
using namespace std;

int main()
{
    int arr[1000];
    int size;

    cout<<"Enter the size of the array: ";
    cin>>size;

    cout<<"Enter the elements: ";
    for(int i=0; i<size; i++)
    cin>>arr[i];

    cout<<"Given array: ";
    for(int i=0; i<size; i++)
    cout<<arr[i]<<" ";

    for(int i=1; i<size; i++)
    {
        for(int j=i; j>0; j--)
        {
            if(arr[j] < arr[j-1])
            swap(arr[j], arr[j-1]);
            else
            break;
        }
    }

    cout<<endl<<"Sorted array: ";
    for(int i=0; i<size; i++)
    cout<<arr[i]<<" ";
}