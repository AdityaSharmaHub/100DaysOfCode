#include<iostream>
#include<vector>
using namespace std;

void parenthesis(int n, int left, int right, vector<string>& ans, string &temp)
{
    if(left+right==2*n)
    {
        ans.push_back(temp);
        return;
    }
    // Left parenthesis
    if(left < n)
    {
        temp.push_back('(');
        parenthesis(n,left+1, right,ans,temp);
        temp.pop_back();
    }
    // Right parenthesis
    if(right < left)
    {
        temp.push_back(')');
        parenthesis(n,left, right+1,ans,temp);
        temp.pop_back();
    }
}

string generateParenthesis(int n) {
    vector<string> ans;
    string temp;
    parenthesis(n, 0, 0, ans, temp);
    return ans;
}

int main()
{
    
    return 0;
}