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

    // // Deletion at start

    // if(head != NULL)
    // {
    //     // if only one node exists
    //     if(head->next == NULL)
    //     {
    //         delete head;
    //         head = NULL;
    //     }
    //     // if more than one node exists
    //     else
    //     {
    //         Node *temp = head;
    //         head = head->next;
    //         delete temp;
    //         head->prev = NULL;
    //     }
    // }

    // // Delete at end

    // if(head != NULL)
    // {
    //     // if only one node exists
    //     if(head->next == NULL)
    //     {
    //         delete head;
    //         head = NULL;
    //     }
    //     // if more than one node exists
    //     else
    //     {
    //         Node *curr = head;
    //         // last node pe leke jao
    //         while(curr->next)
    //         {
    //             curr = curr->next;
    //         }
    //         curr->prev->next = NULL;
    //         delete curr;
    //     }
    // }

    // Delete a given position
    int pos = 3;

    // delete at start
    if(pos == 1)
    {
        // if only one node exists
        if(head->next == NULL)
        {
            delete head;
            head = NULL;
        }
        // if more than one node exists
        else
        {
            Node *temp = head;
            head = head->next;
            delete temp;
            head->prev = NULL;
        }
    }
    else
    {
        Node *curr = head;

        while(--pos)
        {
            curr = curr->next;
        }
        // delete at end
        if(curr->next == NULL)
        {
            curr->prev->next = NULL;
            delete curr;
        }
        // delete at middle
        else
        {
            curr->prev->next = curr->next;
            curr->next->prev = curr->prev;
            delete curr;
        }
    }
    

    // Print the nodes of the linked list
    Node *traverse = head;

    while(traverse)
    {
        cout<<traverse->data<<" ";
        traverse = traverse->next;
    }


    return 0;
}