#include<iostream>
using namespace std;

class NODE
{
    public:
    int data;
    NODE *next;

    NODE(int value)
    {
        data = value;
        next = NULL;
    }
};

int main()
{
    NODE *Head, *Tail;
    Head = Tail = NULL;
    int arr[] = {2,4,5,6,8};

    // Insert the NODE at end
    for(int i=0; i<5; i++)
    {
        // if linked list is empty
        if(Head == NULL)
        {
            Head = new NODE(arr[i]);
            Tail = Head;    
        }
        // if linked list exists
        else
        {
            Tail->next = new NODE(arr[i]);
            Tail = Tail->next;
        }
    }

    // Print the values present in the Linked List
    NODE *temp = Head;

    while(temp != NULL) // or while(temp)
    {
        cout<<temp->data<<" ";
        temp = temp->next;
    }

    return 0;
}