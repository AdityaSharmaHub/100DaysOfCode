#include<iostream>
#include<vector>
#include<stack>
using namespace std;

// Problem Link - https://www.geeksforgeeks.org/problems/next-greater-element-2/1

class Solution {
  public:
    vector<int> nextGreaterElement(int N, vector<int>& arr) {
        // code here
        vector<int>ans(N,-1);
        stack<int>st;
        
        for(int i=0; i<(2*N)-1; i++) // Loop twice the length
        {
            int index = i % N; // Access element considering circular nature
            while(!st.empty() && arr[st.top()] < arr[index])
            {
                ans[st.top()] = arr[index];
                st.pop();
            }
            st.push(index);
        }
        
        return ans;
    }
};

int main()
{
    
    return 0;
}