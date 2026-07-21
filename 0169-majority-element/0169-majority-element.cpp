class Solution {
public:
    int majorityElement(vector<int>& nums) {
        unordered_map<int, int> count;
        int y = nums.size() / 2;

        for (int n : nums) {
            count[n]++;

            if (count[n] > y) {
                return n;
            }
        }

        return -1;
    }
};