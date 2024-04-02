#include<iostream>
using namespace std;

// Merge K sorted linked lists
// Problem Link - https://www.geeksforgeeks.org/problems/merge-k-sorted-linked-lists/1

struct Node
{
	int data;
	Node* next;
	
	Node(int x){
	    data = x;
	    next = NULL;
	}
	
}; 

class Solution{
  public:
  
  Node *merge(Node *head1, Node *head2)
    {
        Node *head = new Node(0);
        Node *tail = head;
        
        while(head1 && head2)
        {
            if(head1->data <= head2->data)
            {
                tail->next = head1;
                head1 = head1->next;
                tail = tail->next;
                tail->next = NULL;
            }
            else
            {
                tail->next = head2;
                head2 = head2->next;
                tail = tail->next;
                tail->next = NULL;
            }
        }
        
        if(head1)
        tail->next = head1;
        else
        tail->next = head2;
        
        // Todo: Dummy node ko delete karna hai (optional)
        return head->next;
    }
  
  
    //Function to merge K sorted linked list.
    Node * mergeKLists(Node *arr[], int K)
    {
        // Your code here
        Node *head = arr[0];
        for(int i=1; i<K; i++)
        {
            head = merge(head, arr[i]); // merge function is same as prev
        }
        
        return head;
    }



    // ------------ Method 2 -----------------

    void mergeSort(Node *arr[], int start, int end)
    {
        if(start <= end)
        return;

        int mid = start + (end - start)/2;
        // Left part
        mergeSort(arr, start, mid);
        // Right part
        mergeSort(arr, mid+1, end);
        arr[start] = merge(arr[start], arr[mid+1]);
    }

    //Function to merge K sorted linked list.
    Node * mergeKLists(Node *arr[], int K)
    {
        mergeSort(arr, 0, K-1);

        return arr[0];
    }
};

int main()
{
    
    return 0;
}