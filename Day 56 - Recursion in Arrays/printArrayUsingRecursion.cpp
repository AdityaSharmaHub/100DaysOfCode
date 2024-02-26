#include<iostream>
using namespace std;

// Print every element present in an Array

void printArray(int arr[], int index, int n)
{
    if(index == n) // base condition
    return;

    cout<<arr[index]<<" ";
    printArray(arr, index+1, n);
}

int main()
{
    int arr[] = {3,7,6,2,8};

    cout<<"Arr: ";
    printArray(arr, 0, 5);
    return 0;
}