#include<iostream>
#include<vector>
using namespace std;

bool search(vector<vector<int> > matrix, int n, int m, int x) 
{
    // code here 
    int row = 0, col = m - 1;
    
    while(row < n && col >= 0)
    {
        if(matrix[row][col] == x)
        {
            return 1;
        }
        else if(matrix[row][col] < x)
        {
            row++;
        }
        else
        {
            col--;
        }
    }
    
    return 0;

}

int main()
{
    
    return 0;
}