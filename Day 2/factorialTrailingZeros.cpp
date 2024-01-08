#include<iostream>
using namespace std;

int trailingZeroes(int n) {
    int count=0;
    while(n>=5){
        count += n/5;
        n /= 5;
    }
    
    return count; 
}

int main()
{
    int n;
    cout<<"Enter the number: ";
    cin>>n;

    cout<<trailingZeroes(n);
    return 0;
}
