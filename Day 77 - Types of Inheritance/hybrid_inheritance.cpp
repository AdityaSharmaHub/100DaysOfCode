#include<iostream>
using namespace std;

// Hybrid Inheritance - Hierarchical + Multiple

class Student
{
    public:

    void print()
    {
        cout<<"I am a student \n";
    }
};

class Male
{
    public: 

    void printMale()
    {
        cout<<"I am Male"<<endl;
    }
};

class Female
{
    public: 

    void printFemale()
    {
        cout<<"I am Female"<<endl;
    }
};

class Boy: public Student, public Male
{
    public:

    void printBoy()
    {
        cout<<"I am a boy \n";
    }
};

class Girl: public Student, public Female
{
    public:

    void printGirl()
    {
        cout<<"I am a girl \n";
    }
};

int main()
{
    Girl G1;
    G1.printGirl();

    Boy B1;
    B1.printMale();

    Student S1;
    S1.print();

    return 0;
}