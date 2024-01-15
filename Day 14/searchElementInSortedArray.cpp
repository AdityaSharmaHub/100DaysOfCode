#include<iostream>
#include<vector>
using namespace std;

bool search(vector<int>& nums, int target) {
    int start=0, end=nums.size()-1, mid;

    while(start <= end)
    {
        mid = start + (end - start) / 2;

        // If element is present on mid
        if(nums[mid] == target)
        return true;

        // Handle duplicates
        while (start < mid && nums[start] == nums[mid]) {
            ++start;
        }

        // Left side sorted
        if(nums[mid] >= nums[start])
        {
            if(nums[start] <= target && nums[mid] > target)
            end = mid - 1;
            else
            start = mid + 1;
        }
        
        // Right side sorted
        else
        {
            if(nums[mid] < target && nums[end] >= target)
            start = mid + 1;
            else
            end = mid - 1;
        }
    }

    return false;
}

int main()
{
    
    return 0;
}