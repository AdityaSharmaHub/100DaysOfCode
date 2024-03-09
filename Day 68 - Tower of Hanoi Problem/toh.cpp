#include<iostream>
#include<math.h>
using namespace std;

// Problem Link - https://www.geeksforgeeks.org/problems/tower-of-hanoi-1587115621/1
// Time Complexity - O(2^n)
// Space Complexity - O(n)

void calculateToh(int n, int src, int helper, int dest)
{
    if(n == 1)
    {
        cout<<"move disk "<<n<<" from rod "<<src<<" to rod "<<dest<<endl;
        return;
    }
    
    calculateToh(n-1, src, dest, helper);
    cout<<"move disk "<<n<<" from rod "<<src<<" to rod "<<dest<<endl;
    calculateToh(n-1, helper, src, dest);
}

// avoid space at the starting of the string in "move disk....."
long long toh(int N, int from, int to, int aux) {
    // Your code here
    calculateToh(N, from, aux, to);
    return pow(2, N)-1;
}

int main()
{
    toh(3,1,3,2);
    return 0;
}