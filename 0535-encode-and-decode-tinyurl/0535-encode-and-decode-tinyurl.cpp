class Solution {
    unordered_map<string, string> code2url;
    unordered_map<string, string> url2code;
    string chars = "abcdefghijklmnopqrstuvwxyzABCDEFGHIJKLMNOPQRSTUVWXYZ0123456789";
    string prefix = "http://tinyurl.com/";

    string generateKey() {
        string key;
        for (int i = 0; i < 6; i++) {
            key += chars[rand() % chars.size()];
        }
        return key;
    }

public:
    string encode(string longUrl) {
        // Return existing short URL if already encoded
        if (url2code.count(longUrl)) {
            return prefix + url2code[longUrl];
        }
        // Generate a unique random key
        string key = generateKey();
        while (code2url.count(key)) {
            key = generateKey();
        }
        code2url[key] = longUrl;
        url2code[longUrl] = key;
        return prefix + key;
    }

    string decode(string shortUrl) {
        string key = shortUrl.substr(prefix.size());
        return code2url[key];
    }
};