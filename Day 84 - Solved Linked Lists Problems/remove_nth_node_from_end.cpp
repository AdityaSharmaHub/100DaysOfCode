#include<iostream>
using namespace std;

// Problem Link - https://leetcode.com/problems/remove-nth-node-from-end-of-list/

struct ListNode {
    int val;
    ListNode *next;
    ListNode() : val(0), next(nullptr) {}
    ListNode(int x) : val(x), next(nullptr) {}
    ListNode(int x, ListNode *next) : val(x), next(next) {}
};

class Solution {
public:
    ListNode* removeNthFromEnd(ListNode* head, int n) {
        int count = 0;
        ListNode *temp = head;

        // Count total numbers of nodes
        while(temp)
        {
            count++;
            temp = temp->next;
        }

        count -= n;
        if(count == 0) // First node ko delete karna ho
        {
            temp = head;
            head = head->next;
            delete temp;
            return head;
        }
        ListNode *curr= head, *prev = NULL;

        while(count--)
        {
            prev = curr;
            curr = curr->next;
        }

        prev->next = curr->next;
        delete curr;

        return head;
    }
};

int main()
{
    
    return 0;
}