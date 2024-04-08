#include<iostream>
#include<vector>
#include<stack>
using namespace std;

// Problem Link - https://leetcode.com/problems/largest-rectangle-in-histogram/

class Solution {
public:
    int largestRectangleArea(vector<int>& heights) {
        int n = heights.size();
        vector<int>right(n); // Next Smallest Right
        vector<int>left(n); // Next Smallest Left
        stack<int>st;

        // Find Next Smallest Right
        for(int i=0; i<n; i++)
        {
            while(!st.empty() && heights[st.top()] > heights[i])
            {
                right[st.top()] = i;
                st.pop();
            }
            st.push(i);
        }

        // Empty the Stack
        while(!st.empty())
        {
            right[st.top()] = n;
            st.pop();
        }

        // Next Smallest Left
        for(int i=n-1; i>=0; i--)
        {
            while(!st.empty() && heights[st.top()] > heights[i])
            {
                left[st.top()] = i;
                st.pop();
            }
            st.push(i);

        }

        // Empty the Stack
        while(!st.empty())
        {
            left[st.top()] = -1;
            st.pop();
        }

        // Let's calculate the area
        int ans = 0;

        for(int i=0; i<n; i++)
        ans = max(ans, heights[i]*(right[i] - left[i] - 1));

        return ans;
    }
};

int main()
{
    
    return 0;
}