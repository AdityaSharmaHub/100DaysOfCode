#include<iostream>
#include<unordered_map>
#include<stack>
using namespace std;

// Problem Link - https://leetcode.com/problems/valid-parentheses/description/

bool isValid(string s) {
    stack<char>st;

    for(int i=0; i<s.size(); i++)
    {
        if(s[i] == '(' || s[i] == '{' || s[i] == '[')
        {
            st.push(s[i]);
        }
        else
        {
            if(st.empty())
            return 0;
            else if(s[i] == ')')
            {
                if(st.top() != '(')
                return 0;
                else
                st.pop();
            }
            else if(s[i] == '}')
            {
                if(st.top() != '{')
                return 0;
                else
                st.pop();
            }
            else
            {
                if(st.top() != '[')
                return 0;
                else
                st.pop();
            }
        }
    }

    return st.empty();
}

// Method 2 - Using GPT
// class Solution {
// public:
//     bool isValid(string s) {
//         stack<char>st;
//         unordered_map<char, char> mapping = {{')', '('}, {']', '['}, {'}', '{'}};

//         for (char c : s) {
//             if (c == '(' || c == '[' || c == '{') {
//                 st.push(c);
//             } else {
//                 if (st.empty() || st.top() != mapping[c]) {
//                     return false;
//                 }
//                 st.pop();
//             }
//         }

//         return st.empty();
//     }
// };

// Alternate method (Don't works with all cases)
    // int left = 0;

    // for(int i=0; i<s.size(); i++)
    // {
    //     if(s[i] == '(' || s[i] == '{' || s[i] == '[')
    //     {
    //         left++;
    //     }
    //     else
    //     {
    //         if(left == 0)
    //         return 0;
    //         else
    //         left--;
    //     }
    // }

    // return left == 0;

// Method 3 - 



int main()
{
    
    return 0;
}