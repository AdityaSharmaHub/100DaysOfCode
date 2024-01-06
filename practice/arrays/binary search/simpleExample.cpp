#include<iostream>
using namespace std;

// Example of Binary Search in an increasing order

int binarySearch(int arr[], int size, int key)
{
    int start = 0;
    int end = size - 1;

    while(start <= end)
    {
        int mid = (start + end) / 2; // This might give an error of overflow
        // So the alternative to this is 
        // mid = start + (end - start) / 2;

        if(arr[mid] == key)
        {
            return mid;
            break;
        }
        else if(arr[mid] < key)
        {
            start = mid + 1;
        }
        else
        {
            end = mid - 1;
        }
    }

    return -1;
}

int main()
{
    int arr[100], size;

    cout<<"Enter the size of the array: ";
    cin>>size;

    cout<<"Enter the elements: ";
    for(int i=0; i<size; i++)
    cin>>arr[i];

    int key;
    cout<<"Which element you want to search for: ";
    cin>>key;

    cout<<binarySearch(arr, size, key)<<endl;

    return 0;
}