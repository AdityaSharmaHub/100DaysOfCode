#include<iostream>
using namespace std;

int main()
{
    // Create an array which will store addresses
    int rows, cols;
    cout<<"Enter the rows and cols: ";
    cin>>rows>>cols;

    int **ptr = new int *[rows];

    // Created 2D Array
    for(int i=0; i<rows; i++)
    {
        ptr[i] = new int[cols];
    }

    // Taking input from user
    cout<<"Enter the values:"<<endl;
    for(int i=0; i<rows; i++)
    for(int j=0; j<cols; j++)
    cin>>ptr[i][j];

    // Print the value
    cout<<"Array:"<<endl;
    for(int i=0; i<rows; i++)
    {
        for(int j=0; j<cols; j++)
        cout<<ptr[i][j]<<" ";
        cout<<endl;
    }

    // Release the memory 
    for(int i=0; i<rows; i++)
    delete[] ptr[i];

    delete[] ptr;

    
    return 0;
}