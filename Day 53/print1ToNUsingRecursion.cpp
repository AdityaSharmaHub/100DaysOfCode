#include<iostream>
using namespace std;

// Print 1 to N using Recursive function

void print(int num) // Using single argument
{
    if(num==1) // Base case (condition)
    {
        cout<<num<<endl;
        return;
    }
    print(num-1); 
    cout<<num<<endl;
}

// void print(int num, int N) // Using two arguments
// {
//     if(num==N)
//     {
//         cout<<num<<endl;
//         return;
//     }
//     cout<<num<<endl;
//     print(num+1, N);
// }

int main()
{
    int N;
    cout<<"Enter the number: ";
    cin>>N;
    print(N); // Using single argument
    // print(1, N); // Using two arguments

    return 0;
}