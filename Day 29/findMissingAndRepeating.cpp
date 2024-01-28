#include<iostream>
#include<vector>
using namespace std;

vector<int> findTwoElement(vector<int> arr, int n) {
    // code here
    
    // Decrease the value by 1
    for(int i=0; i<n; i++)
    arr[i]--;
    
    // Main logic to find occurence and missing
    for(int i=0; i<n; i++)
    {
        arr[arr[i] % n] += n;
    }
    
    vector<int>ans(2);
    for(int i=0; i<n; i++)
    {
        if(arr[i] / n == 2) // Repeating number
        ans[0] = i+1;
        else if(arr[i] / n == 0) // Missing number
        ans[1] = i+1;
    }
    
    return ans;
}

int main()
{
    
    return 0;
}