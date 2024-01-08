#include<iostream>
using namespace std;

int mySqrt(int x) {

    if(x==0)
    return x;
    int first = 1, last = x;
    while (first <= last) {
        int mid = first + (last - first) / 2;
        // mid * mid == x gives runtime error
        if (mid == x / mid)
            return mid;
        else if (mid > x / mid) {
            last = mid - 1;
        }
        else {
            first = mid + 1;
        }
    }
    return last;

}

int main()
{
    int x;
    cout<<"Enter the number: ";
    cin>>x;

    cout<<mySqrt(x);
}