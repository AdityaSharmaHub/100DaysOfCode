#include<iostream>
using namespace std;

// Problem Link - https://www.geeksforgeeks.org/problems/remove-every-kth-node/1

struct Node
{
    int data;
    struct Node* next;
    
    Node(int x){
        data = x;
        next = NULL;
    }
    
};


class Solution {
    public:
    Node* deleteK(Node *head,int K){
      //Your code here
      Node *curr = head, *prev = NULL;
      int count = 1;
      
      if(K == 1)
      return NULL;
      
      while(curr)
      {
          if(count == K)
          {
              prev->next = curr->next;
              delete curr;
              curr = prev->next;
              count = 1;
          }
          else
          {
              prev = curr;
              curr = curr->next;
              count++;
          }
      }
      
      return head;
      
    }
};

int main()
{
    
    return 0;
}