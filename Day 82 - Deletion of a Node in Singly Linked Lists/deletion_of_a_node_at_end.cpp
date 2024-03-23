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

Node *CreateLinkedList(int arr[], int index, int size)
{
    // Base Case
    if(index == size)
    return NULL;

    Node *temp = new Node(arr[index]);
    temp->next = CreateLinkedList(arr, index+1, size);

    return temp;
}

int main()
{
    Node *Head = NULL;
    int arr[] = {2,4,6,8,10};

    Head = CreateLinkedList(arr,0,5);
    
    // Deletion of a Node at end
    // Case 1: If Node exists
    if(Head != NULL) 
    {
        // Case 2: Only a Single Node is present
        if(Head->next == NULL)
        {
            delete Head;
            Head = NULL;
        }
        else // Case 3: More than one node is present
        {
            Node *curr = Head;
            Node *prev = NULL;

            while(curr->next != NULL)
            {
                prev = curr;
                curr = curr->next;
            }

            prev->next = curr->next;
            delete curr;
        }
    }
    
    // Print
    cout<<"Linked List After Deletion: ";
    while(Head)
    {
        cout<<Head->data<<" ";
        Head = Head->next;
    }
    
    return 0;
}