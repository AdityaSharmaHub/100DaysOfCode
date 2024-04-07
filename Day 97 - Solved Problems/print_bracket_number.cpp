#include<iostream>
#include<stack>
#include<vector>
using namespace std;

// Problem Link - https://www.geeksforgeeks.org/problems/print-bracket-number4058/0

class Solution{
public:	

	vector<int> bracketNumbers(string S)
	{
	    int count = 0;
	    stack<int>st;
	    vector<int>ans;
	    
	    for(int i=0; i<S.size(); i++)
	    {
	       // Opening brackets
	       if(S[i] == '(')
	       {
	           count++;
	           ans.push_back(count);
	           st.push(count);
	       }
	       // Closing brackets
	       else if(S[i] == ')')
	       {
	           ans.push_back(st.top());
	           st.pop();
	       }
	    }
	    return ans;
	    
	}
};

int main()
{
    
    return 0;
}