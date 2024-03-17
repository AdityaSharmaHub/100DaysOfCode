#include<iostream>
using namespace std;

class Person // base or parent class
{
    string acc_number, mobile_number; // private: by default
    protected:
    string name;
    int age, weight;
};

class Student: private Person // derived or child class
{
    int roll_no, fees; // private: by default

    public:
    Student(string name, int age, int weight, int roll_no, int fees) // constructor
    {
        this->name = name;
        this->age = age;
        this->weight = weight;
        this->roll_no = roll_no;
        this->fees = fees;
    }

    void display()
    {
        cout<<endl<<"Name: "<<name<<endl;
        cout<<"Age: "<<age<<endl;
        cout<<"Weight: "<<weight<<endl;
        cout<<"Roll Number: "<<roll_no<<endl;
        cout<<"Fees: "<<fees<<endl<<endl;
    }
};

int main()
{
    Student A("Aditya", 20, 50, 201, 10000);
    A.display();
    return 0;
}