#include<iostream>
#include<vector>
using namespace std;

int row[] = {-1,-1,0,0};
int col[] = {0,0,-1,-1};
string dir = "UDLR";

bool valid(int i, int j, int n)
{
    return i>=0 && j>=0 && i<n && j<n; 
}

void total(vector<vector<int>>&matrix, int i, int j, int n, string &path, vector<string>&ans, vector<vector<bool>>&visited)
{
    if(i == n-1 && j == n-1) // base case
    {
        ans.push_back(path);
        return;
    }

    visited[i][j] = 1;

    for(int k=0; k<4; k++)
    {
        if(valid(i+row[k],j+col[k],n) && matrix[i+row[k]][j+col[k]] && !visited[i+row[k]][k+col[k]])
        {
            path.push_back(dir[k]);
            total(matrix, i+row[k], j+col[k], n, path, ans, visited);
            path.pop_back();
        }
    }

    visited[i][j] = 0;

}

int main()
{
    int n = 4;
    vector<vector<bool>>visited(n,vector<bool>(n,0));
    vector<string>ans;
    string path;

    return 0;
}