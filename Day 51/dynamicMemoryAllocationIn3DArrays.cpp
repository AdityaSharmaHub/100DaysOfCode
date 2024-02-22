#include<iostream>
using namespace std;

int main()
{
    int L,B,H;
    cout<<"Enter the length, breadth and height: ";
    cin>>L>>B>>H;

    int ***ptr = new int **[L];

    // Create 2d array and store its address in ptr

    for(int i=0; i<L; i++)
    {
        ptr[i] = new int *[B];
        for(int j=0; j<B; j++)
        {
            ptr[i][j] = new int [H];
        }
    }

    // Entering the values
    for(int i=0; i<L; i++)
    for(int j=0; j<B; j++)
    for(int k=0; k<H; k++)
    ptr[i][j][k] = i+j+k;

    // Printing the values
    for(int i=0; i<L; i++)
    for(int j=0; j<B; j++)
    for(int k=0; k<H; k++)
    cout<<ptr[i][j][k]<<" ";

    // Release the memory 
    for(int i=0; i<L; i++)
    {
        for(int j=0; j<B; j++)
        delete[] ptr[i][j];
        
        delete[] ptr[i];
    }
    delete[] ptr;



    return 0;
}