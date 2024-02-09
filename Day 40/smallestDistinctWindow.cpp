#include<iostream>
#include<vector>
using namespace std;

// Smallest Distinct Window - https://www.geeksforgeeks.org/problems/smallest-distant-window3132/0

int findSubString(string str)
{
    // Your code goes here   
    vector<int>count(256,0);
    int first = 0, second = 0, len = str.size(), diff = 0;
    
    // Calculate the unique characters present in the string
    while(first < str.size())
    {
        if(count[str[first]] == 0)
        diff++;
        
        count[str[first]]++;
        first++;
    }
    
    // Now make the count values to 0 as it is storing the difference value
    for(int i=0; i<256; i++)
    count[i] = 0;
    
    first = 0;
    
    while(second < str.size())
    {
        // increase second till diff exists
        while(diff && second < str.size())
        {
            if(count[str[second]] == 0)
            diff--;
            
            count[str[second]]++;
            second++;
        }
        
        len = min(len, second-first);
        
        // decrease window till diff equals 1
        while(diff != 1)
        {
            len = min(len, second-first);
            count[str[first]]--;
            
            if(count[str[first]] == 0)
            diff++;
            
            first++;
        }
        
    }
    
    return len;
    
}

int main()
{
    
    return 0;
}