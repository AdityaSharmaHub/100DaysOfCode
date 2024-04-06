#include<iostream>
#include<stack>
using namespace std;

// Problem Link - https://leetcode.com/problems/minimum-add-to-make-parentheses-valid/description

class Solution {
public:
    int minAddToMakeValid(string s) {
        stack<char>st;
        int count = 0;

        for(int i=0; i<s.size(); i++)
        {
            if(s[i] == '(')
            st.push(s[i]);
            else
            {
                if(st.empty())
                count++;
                else
                st.pop();
            }
        }
        return count + st.size();
    }
};

// Method 2 
// minimum add to make parenthesis valid
//  int check(string str)
// {
//     int left = 0;
//     int count = 0;

//     for(int i=0; i<str.size();i++)
//     {
//         // opening parenthesis
//         if(str[i] == '(')
//         {
//             left++;
//         }
//         // if closing parenthesis
//         else
//         {
//             if(left==0)
//             {
//                 count++;
//             }
//             else
//             {
//                 left--;
//             }
//         }
//     }
//     return left+count;
// }

int main()
{
    
    return 0;
}