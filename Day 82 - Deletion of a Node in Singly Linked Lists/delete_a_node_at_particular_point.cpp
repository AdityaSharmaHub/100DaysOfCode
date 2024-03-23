#include<iostream>
using namespace std;

class Node
{
    public:
    int data;
    Node *next;

    Node(int x)
    {
        data = x;
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

Node* deleteNode(Node *head,int x)
{
    //Your code here
    
    if(x==1)
    {
        Node *temp = head;
        head = head->next;
        delete temp;
        
        return head;
    }
    
    x--;
    Node *curr = head;
    Node *prev = NULL;
    
    while(x--)
    {
        prev = curr;
        curr = curr->next;
    }
    
    prev->next = curr->next;
    delete curr;
    
    return head;
}

int main()
{
    Node *Head = NULL;
    int arr[] = {2,4,6,8,10};

    Head = CreateLinkedList(arr,0,5);
    int x = 3;
    // Deletion of a Node at end
    deleteNode(Head, x);
    
    // Print
    cout<<"Linked List After Deletion: ";
    while(Head)
    {
        cout<<Head->data<<" ";
        Head = Head->next;
    }
    
    return 0;
}