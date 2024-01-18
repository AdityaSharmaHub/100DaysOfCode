#include<iostream>
#include<vector>
using namespace std;

int solve(vector<int> &A, int B) {
    
    // sort(A.begin(), A.end());
    int start = 0, end = 1, n = A.size();
    
    if(B < 0)
    B = B * -1;
    
    while(end < n)
    {
        // Case 1: Subtraction Equals B
        if(A[end] - A[start] == B)
        return 1;
        // Case 2: Subtraction Less than B
        else if(A[end] - A[start] < B)
        end++;
        // Case 3: Subtraction Greater than B
        else
        start++;
        
        if(start == end)
        end++;
    }
    
    return 0;
}


int main()
{
    
    return 0;
}