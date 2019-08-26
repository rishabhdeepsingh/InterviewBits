class Solution {
public:
    vector<string> findAndReplacePattern(vector<string>& words, string p) {
        vector<string> res;
        int n = p.size();
        for(string s: words){
            if(s.size() != p.size()) continue;
            map<char, char> mp;
            set<char> st;
            bool ok = true;
            for(int i = 0; i < n; ++i){
                st.insert(s[i]);
                if(mp.count(p[i])){
                    if(mp[p[i]] != s[i]) ok = false;
                }else{
                    mp[p[i]] = s[i];
                }
            }
            if(ok and st.size() == mp.size()) res.push_back(s);
        }
        return res;
    }
};
