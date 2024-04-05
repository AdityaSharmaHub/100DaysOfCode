#include<iostream>
#include<stack>
using namespace std;

int main()
{
    stack<int>S;
    S.push(5);
    S.push(53);
    S.push(52);
    cout<<"Size of the stack: "<<S.size()<<endl;
    S.pop();
    cout<<S.top()<<endl;
    return 0;
}