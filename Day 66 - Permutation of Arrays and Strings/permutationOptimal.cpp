#include<iostream>
#include<vector>
using namespace std;

void permute(vector<int>&arr, vector<vector<int>>&ans, int index)
{
    if(index == arr.size()) // base case
    {
        ans.push_back(arr);
        return;
    }

    for(int i=index; i<arr.size(); i++)
    {
        swap(arr[index],arr[i]);
        permute(arr, ans, index+1);
        swap(arr[index],arr[i]);
    }
}
 

int main()
{
    vector<int>arr;
    vector<vector<int>>ans;
    for(int i=0; i<3; i++)
    arr.push_back(i+1);
    permute(arr,ans,0);
    cout<<"Permutation: "<<endl;

    for(int i=0; i<ans.size(); i++)
    {
        for(int j=0; j<ans[i].size(); j++)
        {
            cout<<ans[i][j]<<" ";
        }
        cout<<endl;
    }
    return 0;
}