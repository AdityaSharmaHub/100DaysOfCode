#include<iostream>
using namespace std;

// Multilevel Inheritance

class Person
{
    protected:
    string name;

    public:
    void introduce()
    {
        cout<<endl<<" Hello, my name is "<<name<<endl;
    }

};

class Employee: public Person
{
    protected:
    int salary;

    public:
    void monthlySalary()
    {
        cout<<" My monthly salary is "<<salary<<endl;
    }
};

class Manager: public Employee
{
    public:
    string department;

    Manager(string name, int salary, string department)
    {
        this->name = name;
        this->salary = salary;
        this->department = department;
    }

    void display()
    {
        cout<<" I am leading the "<<department<<" Department"<<endl<<endl;
    }
};

int main()
{
    Manager A1("Aditya", 110000, "IT");
    A1.introduce();
    A1.monthlySalary();
    A1.display();
    return 0;
}