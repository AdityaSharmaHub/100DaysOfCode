#include<iostream>
using namespace std;

bool isPalindrome(int x) {
        
    while(x<0)
    return 0;

    int rem, ans=0, num=x;

    while(num){
        rem = num % 10;
        num = num / 10;
        if(ans > INT_MAX/10)
        return 0;

        ans = ans * 10 + rem;
    }

    if(ans==x)
    return 1;
    else
    return 0;

}

int main()
{
    int x;
    cout<<"Enter the number: ";
    cin>>x;

    cout<<isPalindrome(x);
}