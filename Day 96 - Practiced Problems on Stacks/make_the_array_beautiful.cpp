#include<iostream>
#include<stack>
#include<vector>
using namespace std;

// Problem Link - https://www.geeksforgeeks.org/problems/make-the-array-beautiful--170647/1

class Solution {
  public:
    vector<int> makeBeautiful(vector<int> arr) {
        stack<int>S;
        
        for(int i=0; i<arr.size(); i++)
        {
            if(S.empty()) // if stack is empty
            S.push(arr[i]);
            else if(arr[i] >= 0) // non negative number
            {
                if(S.top() >= 0) // non negative
                S.push(arr[i]);
                else // negative
                S.pop();
            }
            else // negative number
            {
                if(S.top() < 0) // negative
                S.push(arr[i]);
                else // non negative
                S.pop();
            }
        }
        
        vector<int>ans(S.size());
        int i = S.size() - 1;
        
        while(!S.empty())
        {
            ans[i] = S.top();
            i--;
            S.pop();
        }
        return ans;
    }
};

int main()
{
    
    return 0;
}