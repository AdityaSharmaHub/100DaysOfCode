#include<iostream>
#include<vector>
#include<stack>
using namespace std;

// Problem Link - https://www.geeksforgeeks.org/problems/stock-span-problem-1587115621/1

class Solution
{
    public:
    //Function to calculate the span of stockâ€™s price for all n days.
    vector <int> calculateSpan(int price[], int n)
    {
       // Your code here
       stack<int>st;
       vector<int>ans(n,1);
       
       for(int i=n-1; i>=0; i--)
       {
           while(!st.empty() && price[i] > price[st.top()])
           {
               ans[st.top()] = st.top() - i;
               st.pop();
           }
           st.push(i);
       }
       
       while(!st.empty())
       {
           ans[st.top()] = st.top()+1;
           st.pop();
       }
       
       return ans;
    }
};

int main()
{
    
    return 0;
}