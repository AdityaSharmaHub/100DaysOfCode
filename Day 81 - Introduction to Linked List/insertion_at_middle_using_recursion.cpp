#include<iostream>
using namespace std;

// Time Complexity: O(n)
// Space Complexity: O(n)

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

NODE* CreateLinkedList(int arr[], int index, int size)
{
    // Base Case
    if(index == size)
    return NULL;

    NODE *temp;
    temp = new NODE(arr[index]);
    temp->next = CreateLinkedList(arr, index+1, size);

    return temp;
}

int main()
{
    NODE *Head = NULL;
    int arr[] = {2,4,5,6,8};

    Head = CreateLinkedList(arr, 0, 5);

    // Insert node at a particular position
    int x = 3; // Insert position
    int value = 30; // Value to be inserted

    NODE *temp = Head;
    x--;

    while(x--)
    {
        temp = temp->next;
    };

    NODE *temp2 = new NODE(value);
    temp2->next = temp->next;
    temp->next = temp2;

    // Print the values present in the Linked List
    // NODE *temp = Head;

    while(temp != NULL) // or while(temp)
    {
        cout<<temp->data<<" ";
        temp = temp->next;
    }

    return 0;
}