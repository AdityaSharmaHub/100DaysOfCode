#include<iostream>
#include<vector>
using namespace std;

void merge(int arr[], int start, int mid, int end)
{
    vector<int>temp(end-start+1);
    int left = start, right = mid + 1, index = 0;

    while(left <= mid && right <= end)
    {
        if(arr[left] <= arr[right])
        {
            temp[index] = arr[left];
            index++, left++;
        }
        else
        {
            temp[index] = arr[right];
            index++, right++;
        }
    }

    // if left array contains any element
    while(left <= mid)
    {
        temp[index] = arr[left];
        index++, left++;
    }
    // if right array contains any element
    while(right <= end)
    {
        temp[index] = arr[right];
        index++, right++;
    }

    index = 0;
    // Copy the temp array in original array
    while(start <= end)
    {
        arr[start] = temp[index];
        start++, index++;
    }

}

void mergeSort(int arr[], int start, int end)
{
    if(start == end) // base condition
    return;

    int mid = start + (end - start)/2;

    // Divide the array into 2 equal parts
    // Left side
    mergeSort(arr, start, mid);
    // Right side
    mergeSort(arr, mid+1, end);

    // Let's sort the array
    merge(arr, start, mid, end);
}

int main()
{
    int arr[] = {6,3,1,2,8,9,10,7,3,12};
    mergeSort(arr, 0, 9);

    for(int i=0; i<10; i++)
    cout<<arr[i]<<" ";

    return 0;
}