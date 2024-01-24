#include<iostream>
#include<vector>
using namespace std;

int main()
{
    int row, col;
    cout<<"Enter number of rows and cols: ";
    cin>>row>>col;

    vector<vector<int>>matrix(row,vector<int>(col, 1));

    int n = matrix.size();

    // Input elements
    cout<<"Enter the elements: ";
    for(int i=0; i<row; i++)
    for(int j=0; j<col; j++)
    cin>>matrix[i][j];

    // To print all the elements in the vector
    cout<<"Given Matrix: "<<endl;
    for(int i=0; i<row; i++)
    {
        for(int j=0; j<col; j++)
        {
            cout<<matrix[i][j]<<" ";
        }
        cout<<endl;
    }

    // Transpose matrix
    for(int i=0; i<n-1; i++)
    {
        for(int j=i+1; j<n; j++)
        {
            swap(matrix[i][j], matrix[j][i]);
        }
    }

    // To print all the elements in the vector
    cout<<"Transpose Matrix: "<<endl;
    for(int i=0; i<row; i++)
    {
        for(int j=0; j<col; j++)
        {
            cout<<matrix[i][j]<<" ";
        }
        cout<<endl;
    }

    return 0;
}