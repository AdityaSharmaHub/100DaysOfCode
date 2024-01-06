#include<iostream>
using namespace std;

int binarySearch(int arr[], int size, int key)
{
    int start = 0;
    int end = size - 1;
    int mid;

    while(start <= end)
    {
        mid = start + (end - start) / 2;

        if(arr[mid] == key){
            return mid;
            break;
        }
        else if(arr[mid] > key){
            start = mid + 1;
        }
        else{
            end = mid - 1;
        }
    }

    return -1;
}

int main()
{
    int arr[100], size, key;

    cout<<"Enter the size of the array: ";
    cin>>size;

    cout<<"Enter the elements: ";
    for(int i=0; i<size; i++)
    cin>>arr[i];

    cout<<"Which element you want to find: ";
    cin>>key;

    cout<<binarySearch(arr, size, key);

    return 0;
}