#include<iostream>
using namespace std;

void print(int n)
{
    if(n == 0)
    {
        cout<<"Happy Birthday! Aditya"<<endl;
        return;
    }

    cout<<n<<" days left for birthday"<<endl;
    print(n-1);
}

int main()
{
    int n = 5;
    print(n);
    return 0;
}