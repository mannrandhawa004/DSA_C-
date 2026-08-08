class Solution {
public:
    int longestPalindrome(string s) {
        unordered_set<char> oddChars;
        int length = 0;
        for (char c : s) {
            if (oddChars.count(c)) {
                oddChars.erase(c);
                length += 2;
            } else {
                oddChars.insert(c);
            }
        }

        if (!oddChars.empty()) {
            length++;
        }

        return length;
    }
};