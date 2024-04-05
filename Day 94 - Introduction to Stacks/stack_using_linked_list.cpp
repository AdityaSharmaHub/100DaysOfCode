#include<iostream>
using namespace std;

class Node
{
    public:
    int data;
    Node *next;

    Node(int value)
    {
        data = value;
        next = NULL;
    }
};

class Stack
{
    Node *top;
    int size; // actual size of stack

    public:
    Stack()
    {
        top = NULL;
        size = 0;
    }

    void push(int value)
    {
        Node *temp = new Node(value);
        if(temp == NULL) // if heap memory gets full
        {
            cout<<"Stack Overflow"<<endl;
            return;
        }
        else
        {
            temp->next = top;
            top = temp;
            size++;
            cout<<"Pushed "<<value<<" into the stack"<<endl;
        }
    }

    void pop()
    {
        if(top == NULL)
        {
            cout<<"Stack Underflow"<<endl;
            return;
        }
        else
        {
            Node *temp = top;
            cout<<"Popped "<<top->data<<" from the stack"<<endl;
            top = top->next;
            delete temp;
            size--;
        }
    }

    int peak()
    {
        if(top == NULL)
        {
            cout<<"Stack is empty\n";
            return -1;
        }
        else
        {
            return top->data;
        }
    }

    // isEmpty
    bool isEmpty()
    {
        return top == NULL;
    }

    // isSize
    int isSize()
    {
        return size;
    }
};

int main()
{
    Stack S;
    S.push(4);
    S.push(42);
    S.push(32);
    S.push(45);
    S.pop();
    cout<<"Size of the stack: "<<S.isSize()<<endl;
    cout<<S.isEmpty()<<endl;
    cout<<S.peak()<<endl;
    return 0;
}