#include<iostream>
#include<vector>
#include<stack>
using namespace std;

// Problem Link - https://www.geeksforgeeks.org/problems/the-celebrity-problem/1

class Solution 
{
    public:
    //Function to find if there is a celebrity in the party or not.
    int celebrity(vector<vector<int> >& M, int n) 
    {
        // code here 
        stack<int>st;
        
        for(int i=n-1; i>=0; i--)
        st.push(i);
        
        while(st.size() > 1)
        {
            int first = st.top();
            st.pop();
            int second = st.top();
            st.pop();
            
            // Checking the cases 
            if(M[first][second] && !M[second][first])
            st.push(second);
            else if(!M[first][second] && M[second][first])
            st.push(first);
        }
        
        if(st.empty())
        return -1;
        
        int num = st.top();
        st.pop();
        
        // Celebrity hai ya nahi
        int row = 0, col = 0;
        
        for(int i=0; i<n; i++)
        {
            row += M[num][i];
            col += M[i][num];
        }
        
        return row == 0 && col == n-1 ? num : -1;
    }
};

int main()
{
    
    return 0;
}