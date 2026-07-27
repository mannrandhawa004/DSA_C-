class Solution {
public:
    string longestCommonPrefix(vector<string>& strs) {
        if (strs.empty())
            return "";

        std::string prefix = strs[0];
        // cout << prefix;

        for (int i = 1; i < strs.size(); i++) {
            while (strs[i].find(prefix) != 0) {
                // Shorten the prefix by one character
                prefix = prefix.substr(0, prefix.length() - 1);

                if (prefix.empty())
                    return "";
            }
        }
        return prefix;
    }
};