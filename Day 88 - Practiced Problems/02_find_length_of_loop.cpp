#include<iostream>
using namespace std;

// Problem Link - https://www.geeksforgeeks.org/problems/find-length-of-loop/1

struct Node {
    int data;
    struct Node *next;
    Node(int x) {
        data = x;
        next = NULL;
    }
};

//Function to find the length of a loop in the linked list.
int countNodesinLoop(struct Node *head)
{
    // Code here
    Node *slow = head, *fast = head;
    
    // Detect the loop
    while(fast != NULL && fast->next != NULL)
    {
        slow = slow->next;
        fast = fast->next->next; // takes 2 steps
        
        if(slow == fast)
        break;
    }
    
    if(fast == NULL || fast->next == NULL)
    return 0;
    
    int count = 1;
    slow = fast->next;
    
    while(slow != fast)
    {
        count++;
        slow = slow->next;
    }
    
    return count;
    
}

int main()
{
    
    return 0;
}