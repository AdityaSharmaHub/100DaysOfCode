#include<iostream>
#include<vector>
using namespace std;

// void swapping(int p1, int p2) // Pass by value
// This will swap p1 and p2 instead of swapping first and second

// void swapping(int *p1, int *p2) // Pass by pointer
// {
//     int temp = *p1;
//     *p1 = *p2;
//     *p2 = temp;
// }

void swapping(int &p1, int &p2)
{
    int temp = p1;
    p1 = p2;
    p2 = temp;
}

void pass(vector<int>&vPass)
{
    for(int i=0; i<5; i++)
    vPass[i] = 20;
}

int main()
{
    // Example 1 -
    int first = 10, second = 20;
    // swapping(first, second); // Pass by value
    // swapping(&first, &second); // Pass by pointer
    swapping(first, second); // Pass by reference
    cout<<first<<" "<<second<<endl;


    // Example 2 -
    vector<int>v(5,0);
    pass(v);

    for(int i=0; i<5; i++)
    cout<<v[i]<<" ";

    return 0;
}