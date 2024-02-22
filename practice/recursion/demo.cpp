#include<iostream>
using namespace std;

void greet(int n)
{
    // Base case
    if(n > 0)
    {
        cout<<n<<" days left for birthday..."<<endl;
        greet(n-1);
    }
    else
    cout<<"Happy Birthday!";
}

int main()
{
    int n = 5;
    greet(n);
    return 0;
}