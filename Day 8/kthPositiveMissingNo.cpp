#include<iostream>
#include<vector>
using namespace std;

int findKthPositive(vector<int>& arr, int k) {
        
    int num[k];
    int j=0,s=arr.size(),l=1,i=0;
    while(k!=j && i<s){
        if(arr[i]!=l){
            num[j++]=l++;
        }
        else{
            i++;
            l++;
            if(i==s){
                i=i-1;
            }
        }

        }
    return num[k-1];

}

int main()
{
    
    return 0;
}