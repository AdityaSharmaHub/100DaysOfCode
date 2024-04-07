#include<iostream>
#include<stack>
#include<vector>
using namespace std;

// Problem Link - https://www.geeksforgeeks.org/problems/next-greater-element/1

// Brute Force Approach - Gives TLE Error (T.C. - O(n2))
// class Solution {
//   public:
//     vector<long long> nextLargerElement(vector<long long> &arr, int n){
//         // Your code here
        
//         vector<long long>ans(n, -1);
        
//         for(int i=0; i<n; i++)
//         {
//             for(int j=i+1; j<n; j++)
//             {
//                 if(arr[j] > arr[i])
//                 {
//                     ans[i] = arr[j];
//                     break;
//                 }
//             }
//         }
        
//         return ans;
//     }
// };

// Optimized Approach Using Stack - (T.C - O(n) & S.C - O(n))
class Solution {
  public:
    vector<long long> nextLargerElement(vector<long long> &arr, int n){
        // Your code here
        
        vector<long long>ans(n,-1);
        stack<int>st;
        
        for(int i=0; i<2*n; i++) // Loop twice the length
        {
            int index = i % n; // Access element considering circular nature
            while(!st.empty() && arr[st.top()] < arr[index])
            {
                ans[st.top()] = arr[index];
                st.pop();
            }
            st.push(index);
        }

        // Alternate Way
        // for(int i=n-1; i>=0; i--)
        // {
        //     while(!st.empty() && arr[st.top()] < arr[i])
        //     {
        //         st.pop();
        //         ans[i] = arr[st.top()];
        //     }
        //     st.push(i);
        // }
        
        return ans;
    }
};

int main()
{
    
    return 0;
}