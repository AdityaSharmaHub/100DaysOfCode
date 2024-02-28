#include<iostream>
using namespace std;

bool linearSearch(int arr[], int index, int X, int size)
{
    if(index == size) // base condition
    return 0;

    if(arr[index] == X)
    return 1;
    else
    return linearSearch(arr, index+1, X, size);
}

int main()
{
    int arr[] = {2,6,3,4,1,0};
    int X = 4, size = 6; // size of the array
    cout<<linearSearch(arr, 0, X, size);
    return 0;
}