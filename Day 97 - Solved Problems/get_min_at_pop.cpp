#include<iostream>
#include<stack>
using namespace std;

// Problem Link - https://www.geeksforgeeks.org/problems/get-min-at-pop/0

//Function to push all the elements into the stack.
stack<int> _push(int arr[],int n)
{
   // your code here
   stack<int>st;
   
   for(int i=0; i<n; i++)
   {
       if(i==0)
       st.push(arr[i]);
       else
       st.push(min(arr[i], st.top()));
   }
   
   return st;
}

//Function to print minimum value in stack each time while popping.
void _getMinAtPop(stack<int>s)
{
    // your code here
    while(!s.empty())
    {
        cout<<s.top()<<" ";
        s.pop();
    }
}

int main()
{
    
    return 0;
}