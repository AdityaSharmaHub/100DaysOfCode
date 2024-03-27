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

Node *createDLL(int arr[], int index, int size, Node *back)
{
    if(index == size)
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

    // Print the nodes of the linked list
    Node *curr = head;

    while(curr)
    {
        cout<<curr->data<<" ";
        curr = curr->next;
    }
}