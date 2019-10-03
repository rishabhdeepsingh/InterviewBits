class Solution {
public:
    int equalSubstring(string s, string t, int cost) {
        int n = s.size();
        int i = 0, j = 0;
        for(j = 0; j < n; ++j){
            cost -= abs(s[j] - t[j]);
            if(cost < 0){
                cost += abs(s[i] - t[i++]);
            }
        }
        return j - i;
    }
};
