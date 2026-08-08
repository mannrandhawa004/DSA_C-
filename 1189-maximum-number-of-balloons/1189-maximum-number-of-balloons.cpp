class Solution {
    public:
    int maxNumberOfBalloons(string text) {
        unordered_map<char ,int> textCountMap;
        unordered_map<char, int> targetCountMap;

        string targetText = "balloon";

        for(char ch : text){
            textCountMap[ch]++;
        }

        for(char ch : targetText){
            targetCountMap[ch]++;
        }

        int result = INT_MAX;
        for(const auto& [ch , count] : targetCountMap){
            int supply = textCountMap.count(ch) ? textCountMap[ch] : 0;
            result = min(result, supply / count);

        }

        return result; 

    }
};