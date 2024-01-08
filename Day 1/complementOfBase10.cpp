#include<iostream>
using namespace std;

int bitwiseComplement(int n) {
        
    if (n==0)
    return 1;

    int rem, ans=0, mul=1;
    while(n){
        rem = n % 2; // 1
        rem = rem ^ 1; // 0
        n /= 2; // 
        ans = ans + rem * mul; // 0
        mul = mul * 2; // 2
    }

    return ans;

}

int main()
{
    int n;
    cout<<"Enter the number: ";
    cin>>n;

    cout<<bitwiseComplement(n);
}