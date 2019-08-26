class Solution {
public:
    string encode(string s) {
        string key = pre + to_string(mp.size() - 1);
        mp[key] = s;
        return key;
    }
    
    string decode(string s) {
        return mp[s];
    }
    
    private:
        map<string,string> mp;
        string pre = "http://tinyurl.com/";
};
