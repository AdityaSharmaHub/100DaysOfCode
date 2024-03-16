#include<iostream>
using namespace std;

class Customer
{
    string name;
    int account_number, balance;
    static int total_customer; // common variable shared with all the objects
    static int total_bank_balance;

    public:

    Customer(string name, int account_number, int balance)
    {
        this->name = name;
        this->account_number = account_number;
        this->balance = balance;
        total_customer++;
        total_bank_balance += balance;
    }

    static void accessStatic() // static member function
    {
        cout<<"Total Customers: "<<total_customer<<endl;
        cout<<"Total Bank Balance: "<<total_bank_balance<<endl;
    }

    void depositMoney(int amount)
    {
        if(amount > 0)
        {
            balance += amount;
            total_bank_balance += amount;
        }
        else
        cout<<"Enter a valid amount";
    }

    void withdrawMoney(int amount)
    {
        if(amount > 0 && amount <= balance)
        {
            balance -= amount;
            total_bank_balance -= amount;
        }
    }

    void display()
    {
        cout<<name<<" "<<account_number<<" "<<balance<<" "<<total_customer<<endl;
    }

    void displayTotalCustomer()
    {
        cout<<total_customer<<endl;
    }
};

int Customer::total_customer = 0; // declaration
int Customer::total_bank_balance = 0; // declaration

int main()
{
    cout<<endl<<"---- BANKING SYSTEM ----"<<endl;
    Customer C1("Aditya", 1, 1000);
    Customer C2("Adesh", 2, 2000);
    Customer C3("Manish", 3, 3000);
    C1.depositMoney(500);
    C2.withdrawMoney(300);
    Customer::accessStatic();
    cout<<endl;

    return 0;
}