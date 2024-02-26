#include<iostream>
using namespace std;

// Minimum Element present in an Array

int minElement(int arr[], int index, int n)
{
    if(index == n-1)   // base condition
    return arr[index];

    return min(arr[index], minElement(arr, index+1, n));
}

int main()
{
    int arr[100] = {10,12,33,64,61};
    cout<<" "<<endl;
    cout<<"Minimum Element: "<<minElement(arr, 0, 5)<<endl;
    cout<<" "<<endl;
    return 0;
}