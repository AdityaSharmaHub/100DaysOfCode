#include<iostream>
#include<vector>
using namespace std;

int trap(vector<int>& height)
{
    int leftMax = 0, rightMax = 0, index = 0, maxHeight = height[0];
    int n = height.size();
    int water = 0;

    // Find the maximum height of the building
    for(int i=1; i<n; i++)
    {
        if(maxHeight < height[i])
        {
            maxHeight += height[i];
            index = i;
        }

    }

    // Left max
    for(int i=0; i<index; i++)
    {
        if(leftMax < height[i])
        {
            water += leftMax - height[i];
        }
        else
        {
            leftMax += height[i];
        }
    }

    // Right max
    for(int i=n-1; i>index; i--)
    {
        if(rightMax > height[i])
        {
            water += rightMax - height[i];
        }
        else
        {
            rightMax += height[i];
        }
    }

    return water;
}

int main()
{
    
    return 0;
}