#include<iostream>
using namespace std;

class Node
{
    public:
    int data;
    Node *prev, *next;

    Node(int value)
    {
        data = value;
        prev = next = NULL;
    }
};

// Creating a Doubly Linked List using Recursion

Node *createDLL(int arr[], int index, int size, Node *back)
{
    if(index == size) // base case (condition)
    return NULL;

    // Node creation
    Node *temp = new Node(arr[index]);
    temp->prev = back;
    temp->next = createDLL(arr, index+1, size, temp);
    return temp;
}

int main()
{
    Node *head = NULL;
    int arr[] = {1,2,3,4,5};
    head = createDLL(arr, 0, 5, NULL);

    // Insert at any point
    int pos = 0;

    // Insert at start
    if(pos == 0)
    {
        // If linked list exists
        if(head == NULL)
        head = new Node(5);
        // If linked list not exists
        else
        {
            Node *temp = new Node(5);
            temp->next = head;
            head->prev = temp;
            head = temp;
        }
    }
    else
    {
        Node *curr = head;
        while(--pos)
        curr = curr->next;
        // Insert at end
        if(curr->next == NULL) // last node
        {
            Node *temp = new Node(5);
            temp->prev = curr;
            curr->next = temp;
        }
        // Insert at middle
        else
        {
            Node *temp = new Node(5);
            temp->next = curr->next;
            temp->prev = curr;
            curr->next = temp;
            temp->next->prev = temp;
        }
    }

    // Print the nodes of the linked list
    Node *curr = head;

    while(curr)
    {
        cout<<curr->data<<" ";
        curr = curr->next;
    }


    return 0;
}