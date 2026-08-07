class Solution {
    unordered_map<size_t, string> map;

public:
    string encode(string longUrl) {
        // Use std::hash for deterministic mapping
        size_t key = hash<string>{}(longUrl);
        // Handle collision: if the key exists but maps to a different URL
        while (map.count(key) && map[key] != longUrl) {
            key++;
        }
        map[key] = longUrl;
        return "http://tinyurl.com/" + to_string(key);
    }

    string decode(string shortUrl) {
        size_t key = stoull(shortUrl.substr(shortUrl.rfind('/') + 1));
        return map[key];
    }
};