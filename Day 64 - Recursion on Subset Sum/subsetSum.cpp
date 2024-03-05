#include<iostream>
using namespace std;

void print(int arr[], int index, int n, int sum)
{
    if(index == n)
    {
        cout<<sum<<endl;
        return;
    }
    // No (not included)
    print(arr, index+1, n, sum);
    // Yes (included)
    print(arr, index+1, n, sum+arr[index]);
}

int main()
{
    int arr[] = {3,4,5};
    int index = 0, n = 3, sum = 0;
    print(arr, index, n, sum);
    return 0;
}

// Time Complexity: O(2^n)
// Space Complexity: O(n)


// H.W: print sum of subset and subset also
// void subsequence(int arr[],int index,int n,vector<int>&temp,vector<vector<int> >&ans,int res,vector<int>&sum){
//     if(index==n){
//         ans.push_back(temp);
//         sum.push_back(res);
//         return;
//     }
//     subsequence(arr,index+1,n,temp,ans,res,sum);
//     temp.push_back(arr[index]);
//     subsequence(arr,index+1,n,temp,ans,res+arr[index],sum);
//     temp.pop_back();
// }