#include<iostream>
using namespace std;

// Target Sum

bool find(int arr[], int index, int n, int target)
{
    // base case
    if(target == 0)
    return 1;
    else if(index == n || target < 0)
    return 0;

    return find(arr,index+1,n,target)||find(arr,index+1,n,target-arr[index]);
}

int main()
{
    int arr[] = {2,3,6};
    int target = 10;
    cout<<find(arr, 0, 3, target);
    return 0;
}

// Time Complexity: O(2^n)
// Space Complexity: O(n)