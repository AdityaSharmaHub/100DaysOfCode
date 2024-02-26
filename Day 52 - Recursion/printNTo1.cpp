#include<iostream>
using namespace std;

// Print n to 1 numbers

void print(int n)
{
    // Base condition
    if(n == 1)
    {
        cout<<n<<endl;
        return;
    }
    cout<<n<<endl;
    print(n-1);
}

int main()
{
    int n = 10;

    // Using loops
    // for(int i=n; i>0; i--)
    // cout<<i<<endl;

    // Using recursive function
    print(n);
    return 0;
}