#include<iostream>
using namespace std;

// Access Modifiers: public, protected and private

class Person
{
    private: // class is by default private
    int a;

    protected: // accessible within the class and derived class
    int b;

    public: // to access data from anywhere (external code, within the class or derived class)
    int c;

    void display() // Accessible: Because it is present within the class
    {
        a = 10;
        b = 20;
        c = 30;
    }

};

int main()
{
    Person Aditya;
    // Aditya.a = 10; // Error: Inaccessible (private)
    // Aditya.b = 20; // Error: Inaccessible (protected)
    Aditya.c = 30; // Accessible (public)
    Aditya.display();

    return 0;
}