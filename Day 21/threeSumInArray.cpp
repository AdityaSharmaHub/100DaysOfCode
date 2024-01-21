#include<iostream>
using namespace std;

bool find3Numbers(int A[], int n, int X)
{
    //Your Code Here
    
    // Sort the array
    for(int i=0; i<n-1; i++)
    {
        for(int j=i+1; j<n; j++)
        {
            if(A[j] < A[i])
            swap(A[i], A[j]);
        }
    }
    
    // Main solution
    for(int i=0; i<n-2; i++)
    {
        int ans = X - A[i];
        int start = i + 1, end = n - 1;
        while(start < end)
        {
            if(A[start] + A[end] == ans)
            return 1;
            else if(A[start] + A[end] > ans)
            end--;
            else
            start++;
        }
    }
    
    return 0;
}

int main()
{
    
    return 0;
}