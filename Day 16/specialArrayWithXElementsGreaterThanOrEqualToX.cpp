#include <vector>
#include <algorithm>

class Solution {
public:
    int specialArray(std::vector<int>& nums) {
        std::sort(nums.begin(), nums.end());

        for (int x = 0; x <= nums.size(); x++) {
            int count = nums.size() - (std::lower_bound(nums.begin(), nums.end(), x) - nums.begin());
            if (count == x) {
                return x;
            }
        }

        return -1;
    }
};

int main()
{
    return 0;
}

