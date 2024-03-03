#include<iostream>
using namespace std;

int partition(int arr[], int start, int end)
{
    int pos = start;
    for(int i=start; i<=end; i++)
    {
        if(arr[i] <= arr[end])
        {
            swap(arr[i], arr[pos]);
            pos++;
        }
    }

    return pos-1;
}

void quickSort(int arr[], int start, int end)
{
    if(start>=end)
    return;

    int pivot = partition(arr, start, end);
    // Left side
    quickSort(arr, start, pivot-1);
    // Right side
    quickSort(arr, pivot, end);
}

int main()
{
    int arr[] = {4,5,1,3,2,6,2,11,7,9};
    quickSort(arr, 0, 9);
    for(int i=0; i<10; i++)
    cout<<arr[i]<<" ";
    return 0;
}