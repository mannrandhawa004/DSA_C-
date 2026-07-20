class Solution {
public:
    void rotate(vector<int>& nums, int k) {
        int n = nums.size();
        if (n == 0)
            return;

        k = k % n;
        if (k == 0)
            return;

        std::vector<int> result(n);

        for (int i = 0; i < n; i++) {
            if (i + k < n) {
                result[i + k] = nums[i];
            }

            else {
                result[i + k - n] = nums[i];
            }
        }
        nums = result;
    }
};