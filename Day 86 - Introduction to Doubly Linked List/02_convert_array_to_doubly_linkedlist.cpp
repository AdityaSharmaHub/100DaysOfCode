#include<iostream>
using namespace std;

class Node
{
    public:
    int data;
    Node *prev;
    Node *next;

    Node(int value)
    {
        data = value;
        prev = next = NULL;
    }
};

int main()
{
    int arr[] = {1,2,3,4,5};
    Node *head, *tail;
    head = tail = NULL;

    // Creating the linked list
    for(int i=0; i<5; i++)
    {   
        // Case 1: If linked list doesn't exists
        if(head == NULL)
        {
            head = new Node(arr[i]);
            tail = head;
        }
        // Case 2: If linked list already exists
        else
        {
            Node *temp = new Node(arr[i]);
            tail->next = temp;
            temp->prev = tail;
            tail = temp;
        }
    }


    // Insert at start
    // Case 1: If linked list doesn't exist
    if(head == NULL)
    {
        head = new Node(100);
    }
    // Case 2: If linked list already exist
    else
    {
        Node *temp = new Node(100);
        temp->next = head;
        head->prev = temp;
        head = temp;
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