#include<iostream>
using namespace std;

int gcd(int A, int B) 
{ 
    // base condition
    if(B==0)
    return A;
    
    return gcd(B, A%B);
        
} 

int main()
{
    int a = 18, b = 48;
    cout<<"GCD of "<<a<<" and "<<b<<" is "<<gcd(a, b);  
    return 0;
}