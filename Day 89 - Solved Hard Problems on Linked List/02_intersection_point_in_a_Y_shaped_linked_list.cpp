#include<iostream>
using namespace std;

struct Node {
    int data;
    struct Node *next;

    Node(int x) 
    {
        data = x;
        next = NULL;
    }
};

int main()
{
    Node *head1 = NULL, *head2 = NULL;
    Node *curr1 = head1, *curr2 = head2;
    int count1 = 0, count2 = 0;

    while(curr1)
    {
        count1++;
        curr1 = curr1->next;
    }

    while(curr2)
    {
        count2++;
        curr2 = curr2->next;
    }

    curr1 = head1, curr2 = head2;

    while(count1 > count2)
    {
        curr1 = curr1->next;
        count1--;
    }

    while(count2 > count1)
    {
        curr2 = curr2->next;
        count2--;
    }

    while(curr1 != curr2)
    {
        curr1 = curr1->next;
        curr2 = curr2->next;
    }

    // return curr->data;

    return 0;
}