class Solution {
public:
    int maxProduct(int n) {
        int first = INT_MIN;
        int second = INT_MIN;

        int product = 1;
        while (n > 0) {
            int lastDigit = n % 10;
            n /= 10;

            if (lastDigit > first) {
                second = first;
                first = lastDigit;
            } else if (lastDigit > second) {
                second = lastDigit;
            }
        }

        return first * second;
    }
};