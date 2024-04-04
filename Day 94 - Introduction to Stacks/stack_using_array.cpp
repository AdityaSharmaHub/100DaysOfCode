#include<iostream>
using namespace std;

// Stack Operations using an array

class Stack
{
    int *arr;
    int size;
    int top;

    public:
    bool flag;
    Stack(int s) // Constructor
    {
        size = s;
        top = -1;
        arr = new int[s];
        flag = 1;
    }

    // Push Operation
    void push(int value)
    {
        if(top == size-1)
        {
            cout<<"Stack Overflow\n";
            return;
        }
        else
        {
            top++;
            arr[top] = value;
            cout<<"Pushed "<<value<<" into the stack\n";
            flag = 0;
        }
    }

    // Pop Operation
    void pop()
    {
        if(top == -1)
        {
            cout<<"Stack Underflow\n";
        }
        else
        {
            top--;
            cout<<"Popped "<<arr[top+1]<<" from the stack\n";
            if(top == -1)
            flag = 1;
        }
    }

    // Peek Operation - Top element
    int peek()
    {
        if(top == -1)
        {
            cout<<"Stack is Empty\n";
            return -1;
        }
        else
        {
            return arr[top];
        }
    }

    // IsEmpty Operation
    bool isEmpty()
    {
        return top == -1;
    }

    // IsSize Operation
    int isSize()
    {
        return top + 1;
    }

};

int main()
{
    Stack S(5);
    S.push(5);
    S.push(6);
    S.push(8);
    cout<<"Top Element: "<<S.peek()<<endl;
    S.pop();
    cout<<"Top Element: "<<S.peek()<<endl;
    cout<<"Is the Stack Empty: "<<S.isEmpty()<<endl;
    cout<<"Size: "<<S.isSize()<<endl;

    // For negative numbers
    S.push(-1);
    int value = S.peek();
    if(S.flag == 0)
    cout<<"Top Element: "<<value<<endl;


    return 0;
}