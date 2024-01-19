#include<iostream>
using namespace std;

class Solution{
    public:
    // arr: input array
    // n: size of array
    //Function to find the sum of contiguous subarray with maximum sum.
    long long maxSubarraySum(int arr[], int n){
        
        // Your code here
        long long maxi = INT_MIN, prefix = 0;
        
        for(int i=0; i<n; i++)
        {
            prefix += arr[i];
            maxi = max(prefix, maxi);
            if(prefix < 0)
            prefix = 0;
        }
        
        return maxi;
    }
};

int main()
{
    
    return 0;
}