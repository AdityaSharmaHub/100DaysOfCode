#include<iostream>
#include<vector>
using namespace std;

int search(vector<int>& arr, int key) {

    int size = arr.size();
    int start = 0;
    int end = size - 1;

    while(start <= end)
    {
        int mid = (start + end) / 2;
        if(arr[mid] == key)
        {
            return mid;
            break;
        }
        else if(arr[mid] < key)
        {
            start = mid + 1;
        }
        else
        {
            end = mid - 1;
        }
    }

    return -1;
}

int main()
{
    int arr[100] = {1, 2, 3, 4};
    int key = 5;

    // cout<<search(arr, key);
    return 0;
}

