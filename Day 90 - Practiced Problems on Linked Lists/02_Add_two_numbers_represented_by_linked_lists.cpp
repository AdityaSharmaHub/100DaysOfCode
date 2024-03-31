#include<iostream>
using namespace std;

// Problem Link - https://www.geeksforgeeks.org/problems/add-two-numbers-represented-by-linked-lists/1

struct Node {
    int data;
    struct Node* next;
    Node(int x) {
        data = x;
        next = NULL;
    }
};


class Solution
{
    public:
    
    // Reverse a Linked List
    Node* Reverse(Node *curr, Node *prev)
    {
        if(curr == NULL)
        return prev;
        
        Node *front = curr->next;
        curr->next = prev;
        return Reverse(front,curr);
    }
    
    //Function to add two numbers represented by linked list.
    struct Node* addTwoLists(struct Node* first, struct Node* second)
    {
        first = Reverse(first, NULL);
        second = Reverse(second, NULL);
        
        Node *curr1 = first, *curr2 = second;
        Node *head = new Node(0);
        Node *tail = head;
        int sum, carry = 0;
        
        // Addition
        while(curr1 && curr2)
        {
            sum = curr1->data + curr2->data + carry;
            tail->next = new Node(sum%10);
            curr1 = curr1->next;
            curr2 = curr2->next;
            tail = tail->next;
            carry = sum/10;
        }
        
        while(curr1)
        {
            sum = curr1->data + carry;
            tail->next = new Node(sum%10);
            tail = tail->next;
            curr1 = curr1->next;
            carry = sum/10;
        }
        // check if curr2 kahin exists toh nhi karta
        while(curr2)
        {
            sum = curr2->data + carry;
            tail->next = new Node(sum%10);
            tail = tail->next;
            curr2 = curr2->next;
            carry = sum/10;
        }
        // Carry is still remaining
        while(carry)
        {
            tail->next = new Node(carry%10);
            // tail = tail->next;
            carry /= 10;
        }
        // Dummy node bhi present
        head = Reverse(head->next, NULL);
        
        while(head->data == 0 && head->next != NULL)
        {
            head = head->next;
        }
        return head;
        
    }
};

int main()
{
    
    return 0;
}