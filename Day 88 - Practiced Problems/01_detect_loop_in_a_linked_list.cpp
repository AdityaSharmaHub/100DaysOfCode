#include<iostream>
#include<unordered_map>
using namespace std;

// Problem Link - https://www.geeksforgeeks.org/problems/detect-loop-in-linked-list/1

struct Node
{
    int data;
    struct Node *next;
    Node(int x) {
        data = x;
        next = NULL;
    }

};

class Solution
{
    public:
    
    // ERROR: TIME LIMIT EXCEEDED (IT TAKES O(N2))
    
    // Method 1 - Using a vector (TC - O(N2), SP - O(N))
    // bool check(vector<Node*>&visited, Node *curr)
    // {
    //     for(int i=0; i<visited.size(); i++)
    //     {
    //         if(visited[i] == curr)
    //         return 1;
    //     }
    //     return 0;
    // }
    
    
    // Method 2 - Using unordered_map (TC - O(N), SP - O(N))
    // bool detectLoop(Node* head)
    // {
    //     // your code here
    //     Node *curr = head;

    //     unordered_map<Node*, bool>visited;
        
    //     // Traverse the Node
    //     while(curr != NULL)
    //     {
    //         // Check if Node is already visited or not
    //         if(visited[curr] == 1)
    //         return 1;
            
    //         visited[curr] = 1;
    //         curr = curr->next;
    //     }
        
    //     return 0;
    // }

    // Method 3 - Using Slow and Fast Pointer (TC - O(N), SP - O(1))
    bool detectLoop(Node* head)
    {
        // your code here
        Node *slow = head, *fast = head;

        while(fast != NULL && fast->next != NULL)
        {
            slow = slow->next;
            fast = fast->next->next;

            if(slow == fast)
            return 1;
        }
        
        return 0;
    }
};

int main()
{
    
    return 0;
}