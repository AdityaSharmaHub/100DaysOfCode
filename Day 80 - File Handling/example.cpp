#include<iostream>
#include<fstream>
#include<vector>
#include<algorithm>
using namespace std;

int main()
{
    vector<int>arr(5);
    cout<<"Enter the inputs: ";
    for(int i=0; i<5; i++)
    cin>>arr[i];

    // Open file
    ofstream fout; // write karne ke liye
    fout.open("zero.txt"); // if file is not present then it will create it
    fout<<"Original Data:\n";

    for(int i=0; i<5; i++)
    {
        fout<<arr[i]<<" ";
    }

    fout<<"\nSorted Data:\n";

    sort(arr.begin(), arr.end()); // sorting the array

    for(int i=0; i<5; i++)
    {
        fout<<arr[i]<<" ";
    }

    fout.close(); // closing the file to release the resources

    return 0;
}