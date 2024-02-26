#include<iostream>
using namespace std;

// Sum of all elements in an Array

int sum(int arr[], int index, int n)
{
    if(index == n) // base condition
    return 0;

    return arr[index] + sum(arr, index+1, n);    
}

int main()
{
    int arr[] = {3,4,5,8,2};
    cout<<" "<<endl;
    cout<<"Total sum: "<<sum(arr,0,5)<<endl;
    cout<<" "<<endl;
    return 0;
}