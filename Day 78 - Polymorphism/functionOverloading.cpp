#include<iostream>
using namespace std;

// Function Overloading - Multiple functions with same name but different parameters

class Area
{
    public:
    int calculateArea(int r) // circle
    {
        return 3.14 * r * r;
    }

    int calculateArea(int l, int b) // rectangle
    {
        return l * b;
    }
};

int main()
{
    Area A1, A2;
    cout<<"Area of Circle: "<<A1.calculateArea(2)<<endl;
    cout<<"Area of Rectangle: "<<A2.calculateArea(2,3)<<endl;
    return 0;
}