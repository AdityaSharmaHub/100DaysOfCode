#include<iostream>
#include<vector>
using namespace std;

// Reverse a Linked List
// Problem Link - https://leetcode.com/problems/reverse-linked-list/description/

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

// 3rd Approach - Using Approach
// ListNode *Reverse(ListNode *curr, ListNode *prev)
// {
//     if(curr == NULL)
//     return prev;

//     ListNode *fut = curr->next;
//     curr->next = prev;
//     return Reverse(fut, curr);
// }

int main()
{
    ListNode *Head = NULL;
    vector<int>ans;
    ListNode *temp = Head;

    while(temp != NULL)
    {
        ans.push_back(temp->val);
        temp = temp->next;
    }

    int i = ans.size() - 1;
    temp = Head;

    while(temp)
    {
        temp->val = ans[i];
        i--;
        temp = temp->next;
    }



    // 2nd Approach - Reverse the nodes instead of linked list

    // ListNode *curr = Head, *prev = NULL, *fut = NULL;

    // while(curr)
    // {
    //     fut = curr->next;
    //     curr->next = prev;
    //     prev = curr;
    //     curr = fut;
    // }

    // Head = prev; 
    // return Head;



    // 3rd Approach - Using Recursion

    // Reverse(Head, NULL);

    return 0;
}