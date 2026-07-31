// The API isBadVersion is defined for you.
// bool isBadVersion(int version);

class Solution {
public:
    int firstBadVersion(int n) {
        int low = 1;
        int high = n;

        while (low < high) {
            int mid = low + (high - low) / 2;

            if (isBadVersion(mid)) {
                high = mid;
            } else {
                // mid is good, first bad must be after mid
                low = mid + 1;
            }
        }
        // low == high, pointing to the first bad version
        return low;
    }
};