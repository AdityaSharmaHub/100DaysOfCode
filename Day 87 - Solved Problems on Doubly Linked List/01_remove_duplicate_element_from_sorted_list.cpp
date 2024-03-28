#include<iostream>
using namespace std;

// Problem Link - https://www.geeksforgeeks.org/problems/remove-duplicate-element-from-sorted-linked-list/1

struct Node {
    int data;
    struct Node *next;

    Node(int x) 
    {
    data = x;
    next = NULL;
    }

};

//Function to remove duplicates from sorted linked list.
Node *removeDuplicates(Node *head)
{
    // your code goes here
    if(!head || !head->next)
    return head;

    Node *curr = head->next;
    Node *prev = head;

    while(curr)
    {
        if(prev->data == curr->data)
        {
            prev->next = curr->next;
            delete curr;
            curr = prev->next;
        }
        else
        {
            prev = prev->next;
            curr = curr->next;
        }
    }
    return head;
}

int main()
{
    
    return 0;
}