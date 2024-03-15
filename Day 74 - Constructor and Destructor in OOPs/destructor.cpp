#include<iostream>
using namespace std;

class Customer
{
    string name;
    int *data;

    public:
    // Constructor
    Customer(string name)
    {
        this->name = name;
        cout<<"Constructor: "<<name<<endl;
    }

    // Destructor
    ~Customer()
    {
        cout<<"Destructor: "<<name<<endl;
    }
};

int main()
{
    Customer A1("1"), A2("2"), A3("3");
    return 0;
}