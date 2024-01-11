#include <vector>
using namespace std;

class Solution {
public:
    int shipWithinDays(vector<int>& A, int M) {
        int start = 0, end = 0, mid, ans;
        int N = A.size();

        for (int i = 0; i < N; i++) {
            start = max(start, A[i]);
            end += A[i];
        }

        while (start <= end) {
            mid = start + (end - start) / 2;
            int packages = 0, count = 1;

            for (int i = 0; i < N; i++) {
                packages += A[i];
                if (packages > mid) {
                    count++;
                    packages = A[i];
                }
            }

            if (count <= M) {
                ans = mid;
                end = mid - 1;
            } else {
                start = mid + 1;
            }
        }

        return ans;
    }
};
