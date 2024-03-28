#include<iostream>
using namespace std;

// Problem Link - https://www.geeksforgeeks.org/problems/given-a-linked-list-of-0s-1s-and-2s-sort-it/1

struct Node {
    int data;
    struct Node *next;

    Node(int x) 
    {
        data = x;
        next = NULL;
    }
};

class Solution
{
    public:
    //Function to sort a linked list of 0s, 1s and 2s.
    Node* segregate(Node *head) {
        
        // Add code here
        Node *curr = head;
        int count0 = 0, count1 = 0, count2 = 0;
        
        while(curr){
            if(curr->data == 0)
                count0++;
            else if(curr->data == 1)
                count1++;
            else
                count2++;
                
            curr = curr->next;
        }
        
        curr = head;
        
        while(count0--)
        {
            curr->data = 0;
            curr = curr->next;
        }
        
        while(count1--)
        {
            curr->data = 1;
            curr = curr->next;
        }
        
        while(count2--)
        {
            curr->data = 2;
            curr = curr->next;
        }
        
        return head;
    }
};

int main()
{
    
    return 0;
}