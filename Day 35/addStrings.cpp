#include<iostream>
#include<algorithm>
using namespace std;

// 415. Add Strings
// Problem Link - https://leetcode.com/problems/add-strings/description/

string add(string num1, string num2) {
    string ans;
    int index1 = num1.size()-1, index2 = num2.size()-1;
    int sum, carry = 0;

    // Add till my index2 >= 0

    while(index2 >= 0)
    {
        sum = (num1[index1] - '0') + (num2[index2] - '0') + carry;
        carry = sum / 10;
        char c = '0' + sum % 10;
        ans += c;
        index2--, index1--;
    }

    // Add till my index1 >= 0

    while(index1 >= 0)
    {
        sum = (num1[index1] - '0') + carry;
        carry = sum / 10;
        char c = '0' + sum % 10;
        ans += c;
        index1--;
    }

    // Add carry if remaining

    if(carry)
    ans += '1';

    reverse(ans.begin(), ans.end());

    return ans;
}

string addStrings(string num1, string num2) {

    if (num1.size() < num2.size())
        return add(num2, num1);
    else
        return add(num1, num2);
}