#include<iostream>
using namespace std;

class Node
{
    public:
    int data;
    Node *next;
    Node *prev;

    Node(int value)
    {
        data = value;
        next = NULL;
        prev = NULL;
    }
};

int main()
{
    Node *head = NULL;

    // Insert at start
    // Case 1: If linked list doesn't exist
    if(head == NULL)
    {
        head = new Node(5);
    }
    // Case 2: If linked list already exist
    else
    {
        Node *temp = new Node(5);
        temp->next = head;
        head->prev = temp;
        head = temp;
    }

    // Printing the nodes
    Node *traverse = head;
    while(traverse)
    {
        cout<<traverse->data<<" ";
        traverse = traverse->next;
    }

    return 0;
}