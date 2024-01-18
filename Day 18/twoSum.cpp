#include<iostream>
#include<vector>
using namespace std;

vector<int> twoSum(vector<int>& nums, int target) {
    vector<pair<int, int>> sortedNums; // Store original indices
    for (int i = 0; i < nums.size(); i++) {
        sortedNums.push_back({nums[i], i});
    }

    // sort(sortedNums.begin(), sortedNums.end()); // Sort based on values

    int start = 0, end = nums.size() - 1;
    vector<int> ans;
    while (start < end) {
        if (sortedNums[start].first + sortedNums[end].first <= target) {
            if (sortedNums[start].first == sortedNums[end].first && sortedNums[start].first + sortedNums[end].first == target) {
                ans.push_back(sortedNums[start].second);
                ans.push_back(sortedNums[end].second);
                return ans;
            }
            if (sortedNums[start].first + sortedNums[end].first == target) {
                ans.push_back(sortedNums[start].second);
                ans.push_back(sortedNums[end].second);
                return ans;
            }
            start++;
        } else {
            end--;
        }
    }
    return ans;
}

int main()
{
    
    return 0;
}