#include<iostream>
using namespace std;

// Sum of first N natural numbers

int sum(int num)
{
    if(num == 1)
    return 1;
    else if(num <=0)
    return 0;
    
    return num + sum(num - 1);
}

int main()
{
    int n;
    cout<<"Enter the number: ";
    cin>>n;

    cout<<"Sum of first "<<n<<" natural numbers: "<<sum(n);
    return 0;
}