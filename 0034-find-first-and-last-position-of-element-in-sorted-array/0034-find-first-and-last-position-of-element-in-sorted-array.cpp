class Solution {
public:
    vector<int> searchRange(vector<int>& nums, int target) {
        vector<int> result;
        int first = binarySearch(nums, target, true);
        int last = binarySearch(nums, target, false);

        return {first, last};
    }

private:
    int binarySearch(vector<int>& nums, int target, bool isLeftSearch) {
        int left = 0;
        int right = nums.size() - 1;
        int idx = -1;

        while (left <= right) {
            int mid = left + (right - left) / 2;

            if (nums[mid] > target) {
                right = mid - 1;
            } else if (nums[mid] < target) {
                left = mid + 1;
            } else {
                idx = mid;
                if (isLeftSearch) {
                    right = mid - 1;
                } else {
                    left = mid + 1;
                }
            }
        }

        return idx;
    }
};