#include<iostream>
using namespace std;

class Customer
{
    string name;
    int balance, account_number;

    public:
    Customer(string name, int balance, int account_number)
    {
        this->name = name;
        this->balance = balance;
        this->account_number = account_number;
    }

    // Deposit
    void deposit(int amount)
    {
        if(amount > 0)
        {
            balance += amount;
            cout<<"Your account has been credited by Rs "<<amount<<endl;
        }
        else
        {
            throw "Invalid amount";
        }
    }

    // Withdraw
    void withdraw(int amount)
    {
        if(amount > 0 && amount < balance)
        {
            balance -= amount;
            cout<<"Your account has been debited by Rs "<<amount<<endl;
        }
        else if(amount > balance)
        throw "Insufficient balance";
        else if(amount == 0)
        throw "Amount must be greater than 0";
        else
        throw "Invalid amount";
    }
};

int main()
{
    cout<<endl<<"-------- BANKING SYSTEM --------"<<endl;
    Customer C1("Aditya", 10000, 123);

    try
    {
        // C1.deposit(500);
        C1.withdraw(16000);
        C1.deposit(5000);
    }
    catch(const char *e)
    {
        cout<<"Exception Occured: "<<e<<endl;
        cout<<endl;
    }
    

    return 0;
}