#include<iostream>
using namespace std;

// Middle of a Linked List
// Problem Link - https://leetcode.com/problems/middle-of-the-linked-list/

class ListNode
{
    public:
    int val;
    ListNode *next;

    ListNode(int data)
    {
        val = data;
        next = NULL;
    }
};

ListNode* middleNode(ListNode* head) {
    int count = 0;
    // Count total nodes
    ListNode *temp = head;

    while(temp != NULL)
    {
        count++;
        temp = temp->next;
    }
    count /= 2;

    // Number of steps we have to take from start
    temp = head;

    while(count--)
    {
        temp = temp->next;
    }

    return temp;
}

// 2nd Approach - Using Slow and Fast Pointer
// ListNode *middleNode(ListNode *head)
// {
//     ListNode *slow = head, *fast = head;

//     while(fast != NULL && fast->next != NULL)
//     {
//         slow = slow->next;
//         fast = fast->next->next;
//     }

//     return slow;
// }

int main()
{
    
    return 0;
}