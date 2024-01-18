#include<iostream>
using namespace std;

int main()
{
    int nums[100], n;

    cout<<"Enter the size of the array: ";
    cin>>n;

    cout<<"Enter the numbers: ";
    for(int i=0; i<n; i++)
    cin>>nums[i];

    int start = 0, end = n - 1;

    while(start < end)
    {
        if(nums[start] == 0)
        {
            start++;
        }
        else if(nums[end] == 0)
        {
            swap(nums[start], nums[end]);
            start++;
            end--;
        }
        else
        {
            end--;
        }
    }

    cout<<"Segregated Array: ";
    for(int i=0; i<n; i++)
    cout<<nums[i]<<" ";

    return 0;
}