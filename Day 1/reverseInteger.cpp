#include<iostream>
using namespace std;

int reverse(int x) {
        
    int rem, ans=0;

    while(x)
    {
        rem = x % 10;
        x /= 10; 

        if(ans > INT_MAX/10 || ans < INT_MIN/10)
            return 0;
            
        ans = ans * 10 + rem;
    }

    return ans;

}

int main()
{
    int x;
    cout<<"Enter the digit to reverse it: ";
    cin>>x;

    cout<<reverse(x);
}