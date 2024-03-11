#include<iostream>
#include<vector>
using namespace std;

// Problem Link - https://leetcode.com/problems/find-the-winner-of-the-circular-game/description/
// Time Complexity: O(n2)
// Space Complexity: O(n)

int winner(vector<bool>&person, int n, int index, int person_left, int k)
{
    if(person_left == 1)
    {
        for(int i=0; i<n; i++)
        {
            if(person[i] == 0)
            return i;
        }
    }
    // find the kill position
    int kill = (k-1)%person_left;

    while(kill--)
    {
        index = (index + 1) % n;
        while(person[index] == 1)
        index = (index + 1) % n; // skip the killed person
    }

    person[index] = 1;

    // Next alive person
    while(person[index] == 1)
    index = (index + 1) % n;

    // Call the same function again
    return winner(person, n, index, person_left-1, k);
}

int findTheWinner(int n, int k) {
    
    vector<bool>person(n,0);
    return winner(person,n,0,n,k)+1;
}

int main()
{
    cout<<"Winner is: "<<findTheWinner(5,3);
    return 0;
}