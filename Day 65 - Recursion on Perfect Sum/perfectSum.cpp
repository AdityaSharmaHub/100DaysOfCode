#include<iostream>
using namespace std;

// Perfect Sum
// Time Complexity: O(2^n)
// Space Complexity: O(n)

int perfectSum(int arr[], int index, int sum, int n)
{
    if(index == n)
    return sum==0;

    return perfectSum(arr,index+1,sum,n) + perfectSum(arr,index+1,sum-arr[index],n);
}

int main()
{
    int arr[] = {2,5,6,1,0};
    int sum = 7;
    cout<<perfectSum(arr,0,sum,5);
    return 0;
}

// Output Cases: {2,5}, {6,1}, {2,5,0}, {6,1,0}
// Addition of these subsets will give us target value, hence output is 4