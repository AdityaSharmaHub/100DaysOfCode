#include<iostream>
using namespace std;

int reverseEachRow(int arr[][3], int row, int col)
{
    for(int i=0; i<row; i++)
    {
        int start = 0, end = col - 1;
        while(start < end)
        {
            swap(arr[i][start], arr[i][end]);
            start++;
            end--;
        }
    }
    return 0;
}

int main()
{
    int arr[2][3] = {1,2,3,4,5,6};
    reverseEachRow(arr, 2, 3);
    return 0;
}