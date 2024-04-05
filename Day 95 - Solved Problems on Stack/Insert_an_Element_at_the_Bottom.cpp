#include<iostream>
#include<stack>
using namespace std;

// Problem Link - https://www.geeksforgeeks.org/problems/insert-an-element-at-the-bottom-of-a-stack/0

class Solution{
public:
    stack<int> insertAtBottom(stack<int> st,int x){
        stack<int>temp;
        
        while(!st.empty())
        {
            temp.push(st.top());
            st.pop();
        }
        
        st.push(x);
        
        while(!temp.empty())
        {
            st.push(temp.top());
            temp.pop();
        }
        
        return st;
    }
};

int main()
{
    
    return 0;
}