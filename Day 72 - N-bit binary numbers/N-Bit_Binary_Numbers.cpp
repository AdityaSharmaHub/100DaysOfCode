#include<iostream>
#include<vector>
using namespace std;

// Problem Link - https://www.geeksforgeeks.org/problems/print-n-bit-binary-numbers-having-more-1s-than-0s0252/1

void find(int N, vector<string>&ans, string &temp, int zero, int one)
{
    if(temp.size() == N) // base case
    {
        ans.push_back(temp);
        return;
    }
    
    temp.push_back('1');
    find(N, ans, temp, zero, one+1);
    temp.pop_back();
    
    if(zero < one)
    {
        temp.push_back('0');
        find(N, ans, temp, zero+1, one);
        temp.pop_back();
    }
    
    }

int main()
{
    int N = 4;
    vector<string>ans;
    string temp;
    find(N, ans, temp, 0, 0);
    return 0;
}