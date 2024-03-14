#include<iostream>
using namespace std;

class Student
{
    string name;
    int age, roll_no;
    string grade;

    public:
    void setName(string n)
    {
        name = n;
        cout<<name<<endl;
    }
    void setAge(int a)
    {
        age = a;
        cout<<age<<endl;
    }
    void setRoll_Num(int r)
    {
        roll_no = r;
        cout<<roll_no<<endl;
    }
    void setGrade(string g)
    {
        grade = g;
        cout<<grade<<endl;
    }

};

int main()
{
    Student S1;
    S1.setName("Aditya");
    S1.setAge(20);
    S1.setRoll_Num(123);
    S1.setGrade("A+");

    return 0;
}