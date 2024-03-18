#include<iostream>
using namespace std;

// Multipath Inheritance

class Human
{
    public:
    string name;

    void display()
    {
        cout<<"My name is "<<name<<endl;
    }
};

class Engineer: public virtual Human
{
    public:
    string specialization;

    void displayWork()
    {
        cout<<"I have specialization in "<<specialization<<endl;
    }
};

class Youtuber: public virtual Human
{
    public:
    int subscribers;

    void contentCreator()
    {
        cout<<"I have a subscriber base of "<<subscribers<<endl;
    }
};

class CodeTeacher: public Engineer, public Youtuber
{
    public:
    int salary;

    CodeTeacher(string name, string specialization, int subscribers, int salary)
    {
        this->name = name;
        this->specialization = specialization;
        this->subscribers = subscribers;
        this->salary = salary;
    }
};

int main()
{
    CodeTeacher A1("Aditya", "Computer Science", 49000, 10000);
    A1.display();
    return 0;
}