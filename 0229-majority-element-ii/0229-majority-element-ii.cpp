class Solution {
public:
    vector<int> majorityElement(vector<int>& nums) {
        unordered_map<int, int> countMap;
        int x = nums.size() / 3;
        vector<int> result;

        for (int num : nums) {
            countMap[num]++;
        }

        for (auto& [num, count] : countMap) {
            if (count > x) {
                result.push_back(num);
            }
        }

        return result;
    }
};