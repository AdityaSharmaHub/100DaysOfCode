#include<iostream>
using namespace std;

// Problem Link - https://www.geeksforgeeks.org/problems/remove-loop-in-linked-list/1

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

int main()
{
    Node *head = NULL;
    Node *slow = head, *fast = head;

    // Method 1:
    // Step 1 - Detect the loop
    while(fast != NULL && fast->next != NULL)
    {
        slow = slow->next;
        fast = fast->next->next;

        if(slow == fast)
        break;
    }

    // Step 2 - If loop doesn't exists return
    if(fast == NULL || fast->next == NULL)
    return;

    // Step 3 - Place slow at head position
    slow = head;

    // Step 4 - Traverse till both of them meet each other
    while(slow != fast)
    {
        slow = slow->next;
        fast = fast->next;
    }

    // Step 5 - Traverse slow till the node before fast
    while(slow->next != fast)
    {
        slow = slow->next;
    }

    slow->next = NULL;

    // Method 2:
    // Till step 2 it will be same

    // Step 3 - Find the length of the loop
    // slow = fast->next;
    // int count = 1;

    // while(slow != fast)
    // {
    //     count++;
    //     slow = slow->next;
    // }

    // // Loop ke andar kitne nodes hai pata chal gaya

    // slow = head, fast = head;

    // // Fast ko kitne door rakhna hai, jo hai count ke andar store
    // while(count--)
    // {
    //     fast = fast->next;
    // }

    // while(slow != fast)
    // {
    //     slow = slow->next;
    //     fast = fast->next;
    // }

    // // Bring slow to last node
    // while(slow->next != fast)
    // {
    //     slow = slow->next;
    // }

    // slow->next = NULL;

    return 0;
}