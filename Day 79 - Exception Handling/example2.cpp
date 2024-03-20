#include<iostream>
using namespace std;

int main()
{
    try
    {
        int *p = new int[100000000000000];
        cout<<"Memory Allocation Successful"<<endl;
        delete []p;
    }
    catch(const exception &e)
    {
        cout<<endl<<"Exception Occured due to line 7: "<<e.what()<<endl<<endl;
    }


    return 0;
}