#include<iostream>
using namespace std;

// Multiple Inheritance

class Engineer
{
    public:
    string specialization;

    void displayWork()
    {
        cout<<"I have specialization in "<<specialization<<endl;
    }
};

class Youtuber
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
    string name;

    CodeTeacher(string name, string specialization, int subscribers)
    {
        this->name = name;
        this->specialization = specialization;
        this->subscribers = subscribers;
    }

    void showcase()
    {
        cout<<endl;
        cout<<"My name is "<<name<<endl;
        displayWork();
        contentCreator();
        cout<<endl;
    }
};

int main()
{
    CodeTeacher A1("Aditya", "Computer Science", 49000);
    A1.showcase();
    return 0;
}