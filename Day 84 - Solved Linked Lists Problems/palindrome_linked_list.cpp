#include<iostream>
using namespace std;

// Problem Link - https://leetcode.com/problems/palindrome-linked-list/

struct ListNode {
    int val;
    ListNode *next;
    ListNode() : val(0), next(nullptr) {}
    ListNode(int x) : val(x), next(nullptr) {}
    ListNode(int x, ListNode *next) : val(x), next(next) {}
};


class Solution {
public:
    bool isPalindrome(ListNode* head) {

        if(head->next == NULL) // if only one node is present
        return 1;

        // Count number of nodes
        ListNode *temp = head;
        int count = 0;
        while(temp)
        {
            count++;
            temp = temp->next;
        }

        count /= 2;
        ListNode *curr = head, *prev = NULL;

        // Skip number of nodes
        while(count--)
        {
            prev = curr;
            curr = curr->next;
        }

        prev->next = NULL;

        // Reverse the 2nd linked list, curr is pointing at it
        ListNode *front;
        prev = NULL;

        while(curr)
        {
            front = curr->next;
            curr->next = prev;
            prev = curr;
            curr = front;
        }

        // Comparing (prev is pointing to 2nd list & head is pointing to 1st list)
        ListNode *head1 = head, *head2 = prev;

        // Check palindrome
        while(head1)
        {
            if(head1->val != head2->val)
            return 0;
            head1 = head1->next;
            head2 = head2->next;
        }

        return 1;
    }
};

int main()
{
    
    return 0;
}