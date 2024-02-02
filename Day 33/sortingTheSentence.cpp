#include<iostream>
#include<vector>
using namespace std;

// 1859. Sorting the Sentence
// Problem Link - https://leetcode.com/problems/sorting-the-sentence/description/

string sortSentence(string s) {
    vector<string> ans(10);
    string temp = "";
    int count = 0;

    for (int i = 0; i <= s.size(); i++) {
        if (s[i] == ' ' || i==s.size()) {
            int position = temp[temp.size() - 1] - '0';
            temp.pop_back();
            ans[position] = temp;
            temp.clear();
            count++;
        } else
            temp += s[i];
    }

    for (int i = 1; i <= count; i++) {
        temp += ans[i];
        temp += ' ';
    }
    temp.pop_back();

    return temp;
}

int main()
{
    
    return 0;
}