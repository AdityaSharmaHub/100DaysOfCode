#include<iostream>
using namespace std;

class Customer
{
    string name;
    int account_number;
    int balance;

    public:

    // Default constructor
    Customer()
    {   
        name = "USER";
        account_number = 100365;
        balance = 10;
    }

    // Parameterized Constructor
    Customer(string name, int account_number, int balance)
    {   
        this->name = name; // this pointer
        this->account_number = account_number;   
        this->balance = balance;
    }

    // Constructor Overloading
    Customer(string n, int acc)
    {   
        name = n;
        account_number = acc;
    }

    // Inline Constructor
    // inline Customer(string a, int b, int c): name(a), account_number(b), balance(c){}

    void display()
    {
        cout<<name<<" "<<account_number<<" "<<balance<<endl;
    }

    // Copy Constructor (User-defined)
    Customer(Customer &B)
    {
        name = B.name;
        account_number = B.account_number;
        balance = B.balance;
    }

};

int main()
{
    Customer C1;
    Customer C2("Aditya", 100234, 1000);
    Customer C3("Sahil", 100444);

    C1.display();
    C2.display();
    C3.display();

    Customer C4(C3); // Copy Constructor
    C4.display();

    return 0;
}

// IMP: Constructor is also used to open a file from your computer