#include<iostream>
#include<vector>
using namespace std;

// Problem Link - https://leetcode.com/problems/find-the-winner-of-the-circular-game/description/
// Time Complexity: O(n)
// Space Complexity: O(n)

int winner(int n, int k)
{
    if(n == 1)
    return 0;

    return (winner(n-1, k) + k) % n;
}

int findTheWinner(int n, int k) {
    return winner(n,k)+1;
}

int main()
{
    cout<<findTheWinner(5,3);
    return 0;
}