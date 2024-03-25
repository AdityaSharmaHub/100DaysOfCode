#include<iostream>
using namespace std;

// Problem Link - https://leetcode.com/problems/rotate-list/

struct ListNode {
    int val;
    ListNode *next;
    ListNode() : val(0), next(nullptr) {}
    ListNode(int x) : val(x), next(nullptr) {}
    ListNode(int x, ListNode *next) : val(x), next(next) {}
};


class Solution {
public:
    ListNode* rotateRight(ListNode* head, int k) {

        if(head == NULL || head->next == NULL)
        return head;

        // Counting the number of nodes present in the linked list
        int count = 0;
        ListNode *temp = head;
        while(temp)
        {
            count++;
            temp = temp->next;
        }

        k = k % count;
        
        if(k == 0)
        return head;

        count -= k;

        ListNode *curr = head, *prev = NULL;

        while(count--)
        {
            prev = curr;
            curr = curr->next;
        }

        prev->next = NULL;
        ListNode *tail = curr;

        // Second list uske last node pe jao
        while(tail->next != NULL)
        {
            tail = tail->next;
        }

        tail->next = head;
        head = curr;

        return head;
    }
};

int main()
{
    
    return 0;
}