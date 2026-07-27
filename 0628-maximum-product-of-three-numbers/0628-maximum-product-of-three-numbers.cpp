class Solution {
public:
    int maximumProduct(vector<int>& nums) {
         sort(nums.begin(), nums.end(), greater<>());
        int n = nums.size();

        long long option1 = (long long)nums[0] * nums[1] * nums[2];
        long long option2 = (long long)nums[0] * nums[n - 1] * nums[n - 2];

        return max(option1, option2);
    }
};