#include<iostream>
#include<stack>
#include<vector>
using namespace std;

// Problem Link - https://www.geeksforgeeks.org/problems/smallest-number-on-left3403/1

class Solution{
public:
    vector<int> leftSmaller(int n, int a[]){
        // code here
        vector<int>ans(n,-1);
        stack<int>st;
        
        for(int i=n-1; i>=0; i--)
        {
            while(!st.empty() && a[st.top()] > a[i])
            {
                ans[st.top()] = a[i];
                st.pop();
            }
            st.push(i);
        }
        
        return ans;
    }
};

int main()
{
    
    return 0;
}