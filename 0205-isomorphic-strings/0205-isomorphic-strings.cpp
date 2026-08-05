class Solution {
public:
    bool isIsomorphic(string s, string t) {
        unordered_map<char, char> mapST;
        unordered_map<char, char> mapTS;

        for(int i = 0; i < s.size(); i++){
            char charST = s[i];
            char charTS = t[i];

            if(mapST.count(charST) && mapST[charST] != charTS){
                return false;
            }

            if(mapTS.count(charTS) && mapTS[charTS] != charST){
                return false;
            }

            mapST[charST] = charTS;
            mapTS[charTS] = charST;
        }

        return true;
    }
};