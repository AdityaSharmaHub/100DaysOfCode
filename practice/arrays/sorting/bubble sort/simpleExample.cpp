#include<iostream>
using namespace std;

int main()
{
    int nums[1000];
    int size;

    cout<<"Enter the size of array: ";
    cin>>size;

    cout<<"Enter the elements: ";
    for(int i=0; i<size; i++)
    cin>>nums[i];

    cout<<"Given array: ";
    for(int i=0; i<size; i++)
    cout<<nums[i]<<" ";

    for(int i=size-2; i>=0; i--)
    {
        bool swapped=0;
        for(int j=0; j<=i; j++)
        {
            if(nums[j] > nums[j+1])
            {
                swap(nums[j], nums[j+1]);
                swapped=1;
            }
        }

        if(swapped == 0)
        cout<<endl<<"No swapping done";
        break;
    }

    cout<<endl<<"Sorted array: ";
    for(int i=0; i<size; i++)
    cout<<nums[i]<<" ";
}