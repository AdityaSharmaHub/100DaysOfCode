#include<iostream>
#include<vector>
using namespace std;

int searchInsert(vector<int>& arr, int key) {
        
    int size = arr.size();
    int start = 0;
    int end = size - 1;

    while(start <= end)
    {
        int mid = start + (end - start) / 2;

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

    return start;
}

int main()
{
    
    return 0;
}