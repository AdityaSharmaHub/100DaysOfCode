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

NODE *CreateLinkedList(int arr[], int index, int size, NODE *prev)
{
    // Base Case
    if(index == size)
    return prev;

    NODE *temp;
    temp = new NODE(arr[index]);
    temp->next = prev;
    return CreateLinkedList(arr, index+1, size, temp);
}

int main()
{
    NODE *Head = NULL;
    int arr[] = {2,4,5,6,8};

    Head = CreateLinkedList(arr, 0, 5, NULL);

    // Print the values present in the Linked List
    NODE *temp = Head;

    while(temp != NULL) // or while(temp)
    {
        cout<<temp->data<<" ";
        temp = temp->next;
    }

    return 0;
}