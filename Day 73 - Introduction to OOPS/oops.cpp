#include<iostream>
using namespace std;

// class (user-defined datatype)
class Student 
{
    public:
    string name;
    int age, roll_no;
    string grade;
};

int main()
{
    cout<<"Student's Data: "<<endl;
    cout<<endl;

    Student S1; // S1 is the object here
    S1.name = "Aditya";
    S1.age = 20;
    S1.roll_no = 43;
    S1.grade = "A+";

    cout<<"Name: "<<S1.name<<endl;
    cout<<"Age: "<<S1.age<<endl;
    cout<<"Roll Number: "<<S1.roll_no<<endl;
    cout<<"Grade: "<<S1.grade<<endl;
    cout<<endl;
    return 0;
}