#include<iostream>
using namespace std;

bool find4Numbers(int A[], int n, int X)  
{
// Sort the array
    for(int i=0; i<n-1; i++)
    {
        for(int j=i+1; j<n; j++)
        {
            if(A[j] < A[i])
            swap(A[i], A[j]);
        }
    }
    
    // Main Solution
    for(int i=0; i<=n-4; i++)
    {
        for(int j=i+1; j<=n-3; j++)
        {
            int ans = X - (A[i] + A[j]);
            int start = j + 1, end = n - 1;
            while(start < end)
            {
                if(A[start] + A[end] == ans)
                    return 1;
                else if(A[start] + A[end] < ans)
                    start++;
                else
                    end--;
            }
        }
    }
    
    return 0;

}

int main()
{
    
    return 0;
}