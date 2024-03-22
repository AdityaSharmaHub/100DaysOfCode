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
    NODE *Head;
    Head = NULL;

    int arr[] = {2,4,5,6,8};

    // Insert the NODE at start

    for(int i=0; i<5; i++)
    {
        // Case 1: If Linked List doesn't exist
        if(Head == NULL)
        Head = new NODE(arr[i]);
        // Case 2: If Linked List exists
        else
        {
            NODE *temp;
            temp = new NODE(arr[i]);
            temp->next = Head;
            Head = temp;
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