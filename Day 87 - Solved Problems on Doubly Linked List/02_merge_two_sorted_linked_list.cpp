#include<iostream>
using namespace std;

// Problem Link - https://www.geeksforgeeks.org/problems/merge-two-sorted-linked-lists/1

struct Node {
    int data;
    struct Node *next;

    Node(int x) 
    {
        data = x;
        next = NULL;
    }
};

//Function to merge two sorted linked list.
Node* sortedMerge(Node* head1, Node* head2)  
{  
    // code here
    
    // RUNTIME ERROR: MORE TIME TAKEN THAN EXPECTED 
    
    // Node *head = new Node(0);
    // Node *tail = head;
    
    // while(head1 && head2)
    // {
    //     if(head1->data <= head2->data)
    //     {
    //         tail->next = head1;
    //         head1 = head1->next;
    //         tail = tail->next;
    //         tail->next = NULL;
    //     }
    //     else
    //     {
    //         tail->next = head2;
    //         head2 = head1->next;
    //         tail = tail->next;
    //         tail->next = NULL;
    //     }
    // }
    
    // if(head1)
    // tail->next = head1;
    // else
    // tail->next = head2;
    
    // tail = head;
    // head = head->next;
    // delete tail;
    
    // return head;
    

    // If one of the lists is empty, return the other list
    if (!head1)
        return head2;
    if (!head2)
        return head1;

    // Determine the head of the merged list
    Node *head;
    if (head1->data <= head2->data) {
        head = head1;
        head1 = head1->next;
    } 
    else {
        head = head2;
        head2 = head2->next;
    }
    Node *current = head;

    // Merge the two lists
    while (head1 && head2) {
        if (head1->data <= head2->data) {
            current->next = head1;
            head1 = head1->next;
        } 
        else {
            current->next = head2;
            head2 = head2->next;
        }
        current = current->next;
    }

    // Append any remaining nodes from either list
    if (head1)
        current->next = head1;
    else
        current->next = head2;

    return head;

}

int main()
{
    
    return 0;
}