#include<iostream>
#include<vector>
using namespace std;

void rotate(vector<vector<int> >& matrix) {
    // Code here
    int n = matrix.size();
    
    // Repeat this steps twice
    for(int i=0; i<2; i++)
    {
        // Transpose matrix
        for(int i=0; i<n-1; i++)
        {
            for(int j=i+1; j<n; j++)
            swap(matrix[i][j], matrix[j][i]);
        }
    
        // Reverse matrix
        for(int i=0; i<n; i++)
        {
            int start = 0, end = n-1;
            while(start < end)
            {
                swap(matrix[i][start], matrix[i][end]);
                start++;
                end--;
            }
        }
    }
}

int main()
{
    
    return 0;
}