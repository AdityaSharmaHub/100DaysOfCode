#include<iostream>
using namespace std;

// Operator Overloading

// NOTE: Within the class same type ke object ka private member ko access kar sakte hain

class Complex
{
    int real, img; // private: by default

    public:
    Complex(){} // default constructor

    Complex(int real, int img)
    {
        this->real = real;
        this->img = img;
    };

    void display()
    {
        cout<<"Addition of Complex Numbers: "<<real<<" + i"<<img<<endl;
    }

    Complex operator +(Complex &C)
    {
        Complex ans;
        ans.real = real + C.real;
        ans.img = img + C.img;
        return ans;
    }
};

int main()
{
    Complex C1(3,4);
    Complex C2(6,2);
    Complex C3 = C1 + C2; // We can also say C1.func(C2) For understanding
    C3.display();
    return 0;
}