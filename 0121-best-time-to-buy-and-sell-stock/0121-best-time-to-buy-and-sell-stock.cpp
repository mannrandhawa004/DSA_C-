class Solution {
public:
    int maxProfit(vector<int>& prices) {
        int max_profit = 0;
        int min_price = INT_MAX;

        for (int num : prices) {
            if (num < min_price) {
                min_price = num;
            }else{
                max_profit = max(max_profit, num - min_price);
            }
        }

        return max_profit;
    }
};