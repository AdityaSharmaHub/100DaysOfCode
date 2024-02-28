#include<iostream>
using namespace std;

// Binary Search using Recursion

bool binarySearch(int arr[], int start, int end, int X)
{
    if(start > end) // base case
    return 0;

    int mid = start + (end - start)/2;

    if(arr[mid] == X)
    return 1;
    else if(arr[mid] < X)
    return binarySearch(arr, mid+1, end, X);
    else
    return binarySearch(arr, start, mid-1, X);
}

int main()
{
    int arr[] = {1,3,5,9,12,16};
    cout<<binarySearch(arr, 0, 5, 12);
    return 0;
}