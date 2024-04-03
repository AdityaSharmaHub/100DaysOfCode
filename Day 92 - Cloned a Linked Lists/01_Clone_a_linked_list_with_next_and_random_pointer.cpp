#include<iostream>
#include<unordered_map>
using namespace std;

// Clone a linked list with next and random pointer
// Problem Link - https://www.geeksforgeeks.org/problems/clone-a-linked-list-with-next-and-random-pointer/1

// Time Complexity - O(n2)
// Space Complexity - O(1)

struct Node {
    int data;
    Node *next;
    Node *arb;

    Node(int x) {
        data = x;
        next = NULL;
        arb = NULL;
    }
};

// Function to find arbitrary pointer
Node *find(Node *curr1, Node *curr2, Node *x)
{
    if(x == NULL) // base case
    return NULL;
    
    while(curr1 != x)
    {
        curr1 = curr1->next;
        curr2 = curr2->next;
    }
    
    return curr2;
}

Node *copyList(Node *head)
{
    //Write your code here
    Node *headCopy = new Node(0);
    Node *tailCopy = headCopy;
    Node *temp = head;
    
    // Clone created without arbitrary pointer
    while(temp)
    {
        tailCopy->next = new Node(temp->data);
        tailCopy = tailCopy->next;
        temp = temp->next;
    }
    
    tailCopy = headCopy;
    headCopy = headCopy->next;
    delete tailCopy;
    
    // Assign arbitrary pointer to the clone linked list
    tailCopy = headCopy;
    temp = head;
    
    while(temp)
    {
        tailCopy->arb = find(head, headCopy, temp->arb);
        tailCopy = tailCopy->next;
        temp = temp->next;
    }
    
    return headCopy;

    // Another method
    // unordered_map<Node*, Node*>m;

    // // fill the value inside the map
    // while(temp)
    // {
    //     m[temp] = tailCopy;
    //     tailCopy = tailCopy->next;
    //     temp = temp->next;
    // }

    // // Assign random pointer to clone linked list
    // tailCopy = headCopy;
    // temp = head;

    // while(temp)
    // {
    //     tailCopy->arb = m[temp->arb];
    //     tailCopy = tailCopy->next;
    //     temp = temp->next;
    // }

    // return headCopy;
}

int main()
{
    
    return 0;
}