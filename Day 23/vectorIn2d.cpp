#include<iostream>
#include<vector>
using namespace std;

int main()
{

    // Create a 2D Vector
    
    // Take input from user
    int row, col;
    cout<<"Enter the row and col: ";
    cin>>row>>col;

    vector<vector<int>>matrix(row,vector<int>(col,1));

    // Input elements
    for(int i=0; i<row; i++)
    for(int j=0; j<col; j++)
    cin>>matrix[i][j];

    // To print all the elements in the vector
    // for(int i=0; i<3; i++)
    // {
    //     for(int j=0; j<4; j++)
    //     {
    //         cout<<matrix[i][j]<<" ";
    //     }
    // }

    // Print rows and cols separately
    // cout<<endl;
    // cout<<"Rows: "<<matrix.size();
    // cout<<endl;
    // cout<<"Cols: "<<matrix[0].size();

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