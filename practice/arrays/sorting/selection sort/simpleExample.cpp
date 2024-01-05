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

    for(int i=0; i<size-1; i++)
    {
        int index = i;
        for(int j=i+1; j<size; j++)
        {
            if(arr[j] < arr[index])
            {
                index = j;
            }
        }
        
        swap(arr[i], arr[index]);
    }

    for(int i=0; i<size; i++)
    {
        cout<<"Sorted array: "<<arr[i]<<" ";
    }
}