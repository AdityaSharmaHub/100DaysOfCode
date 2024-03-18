#include<iostream>
using namespace std;

// Single Inheritance

class Person
{
    protected:
    string name;
    int age;

    Person(string name, int age)
    {
        this->name = name;
        this->age = age;
    }

    public:
    void display()
    {
        cout<<name<<" "<<age<<" "<<endl;
    }
};

class Student: public Person
{
    int roll_no, fees;

    public:
    Student(string name, int age, int roll_no, int fees): Person(name, age)
    {
        this->name = name;
        this->age = age;
        this->roll_no = roll_no;
        this->fees = fees;
    }

    void display()
    {
        cout<<"Name: "<<name<<endl;
        cout<<"Age: "<<age<<endl;
        cout<<"Roll No: "<<roll_no<<endl;
        cout<<"Fees: "<<fees<<endl;
    } 
};

int main()
{
    Student A1("Aditya", 20, 45, 999);
    A1.display();
    return 0;
}