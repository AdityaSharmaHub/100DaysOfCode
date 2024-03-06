#include<iostream>
using namespace std;

// Target Sum With Repitition

int targetSum(int arr[], int index, int target, int n)
{
    if(target == 0) // base case
    return 1;
    if(index == n || target < 0)
    return 0;

    return targetSum(arr,index+1,target,n) + targetSum(arr,index,target-arr[index],n);
}

int main()
{
    int arr[]= {2,3,4};
    int target = 6;
    cout<<"No. of cases: "<<targetSum(arr,0,target,3);
    return 0;
}

// Output cases: {2,2,2}, {3,3}, {2,4}
// Repetition is allowed hence 3 cases must be generated