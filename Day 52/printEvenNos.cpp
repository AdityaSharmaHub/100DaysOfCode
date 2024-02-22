#include<iostream>
using namespace std;

// Print Even Numbers from n

void printEvenNos(int n)
{
    if(n == 2)
    {
        cout<<n<<endl;
        return;
    }
    cout<<n<<endl;
    printEvenNos(n-2);
}

int main()
{
    int n = 10;

    // Using loops
    // for(int i=n; i>0; i=i-2)
    // cout<<i<<endl;

    // Using recursive function
    printEvenNos(n);
    return 0;
}