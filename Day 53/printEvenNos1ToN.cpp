#include<iostream>
using namespace std;

// Print Even Numbers from 1 till N

void printEvenNos(int num) // Using single arguments
{
    if(num==2) // Base case (condition)
    {
        cout<<num<<endl;
        return;
    }
    printEvenNos(num-2);
    cout<<num<<endl;
}

// void printEvenNos(int num, int N) // Using two arguments
// {
//     if(num==N) // Base case (condition)
//     {
//         cout<<num<<endl;
//         return;
//     }
//     cout<<num<<endl;
//     printEvenNos(num+2, N);
// }

int main()
{
    int N;
    cout<<"Enter the num: ";
    cin>>N;

    if(N%2==1) // To make N even
    N--;

    // printEvenNos(2, N); // Using two arguments
    printEvenNos(N); // Using single arguments
    return 0;
}