#include<iostream>
using namespace std;

// Hierarchial Inheritance

class Person
{
    protected:
    string name;
    int age;

    Person(){}

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
        cout<<endl<<"-------- STUDENTS DATA --------"<<endl;
        cout<<"Name: "<<name<<endl;
        cout<<"Age: "<<age<<endl;
        cout<<"Roll No: "<<roll_no<<endl;
        cout<<"Fees: "<<fees<<endl;
    } 
};

class Teacher: public Person
{
    int salary;

    public:
    Teacher(int salary, string name, int age)
    {
        this->salary = salary;
        this->name = name;
        this->age = age;
    }

    void display()
    {
        cout<<endl<<"-------- TEACHERS DATA --------"<<endl;
        cout<<"Name: "<<name<<endl;
        cout<<"Age: "<<age<<endl;
        cout<<"Salary: "<<salary<<endl<<endl;
    } 
};

int main()
{
    Student S1("Aditya", 20, 12, 999);
    S1.display();
    Teacher T1(49000, "Nidhi", 35);
    T1.display();
    return 0;
}