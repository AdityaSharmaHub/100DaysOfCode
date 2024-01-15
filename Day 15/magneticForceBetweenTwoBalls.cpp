#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;

int maxDistance(vector<int>& position, int m) {
    int n=position.size();
    int start=1,end,mid,ans;
    sort(position.begin(),position.end());
    end=position[n-1]-position[0];
    while(start<=end){
        mid=start+(end-start)/2;
        int ballscount=1,pos=position[0];
        for(int i=1;i<n;i++){
            if(position[i]>=(mid+pos)){
                ballscount++;
                pos=position[i];
            }
        }
        if(ballscount>=m){
            ans=mid;
            start=mid+1;
        }
        else end=mid-1;
    }
    return ans;
}

int main()
{
    
    return 0;
}