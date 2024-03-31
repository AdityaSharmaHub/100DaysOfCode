#include<iostream>
using namespace std;

// Problem Link - https://www.geeksforgeeks.org/problems/reverse-a-linked-list-in-groups-of-given-size/1


//   Reverse a linked list
//   The input list will have at least one element  
//   Return the node which points to the head of the new LinkedList
//   Node is defined as 
struct node
{
    int data;
    struct node* next;

    node(int x){
        data = x;
        next = NULL;
    }

}*head;

class Solution
{
    public:
    
    struct node *reverseIt (struct node *head, int k)
    { 
        // Complete this method
        node *first = new node(0);
        first->next = head;
        head = first;
        int x;
        node *second, *prev, *curr, *front;
        // Reverse
        while(first->next)
        {
            x = k;
            second = first->next;
            prev = first;
            curr = first->next;
            while(x && curr)
            {
                front = curr->next;
                curr->next = prev;
                prev = curr;
                curr = front;
                x--;
            }
            first->next = prev;
            second->next = curr;
            first = second;
        }
        // Dummy Node ko delete
        first = head;
        head = head->next;
        delete first;
    
        return head;
    }
};

int main()
{
    return 0;
}