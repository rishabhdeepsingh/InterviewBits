int Solution::isMatch(const string s, const string p) {
    int m = s.size();
    int n = p.size();
    vector<bool>dp(n+1);
    dp[0] = true;
    for (int j = 1; j < n; j+=2) {
        if (p[j] == '*') {
            dp[j+1] = true;
        } else {
            break;
        }
    }
    bool next, pre;
    for (int i = 1; i <= m; ++i) {
        pre = dp[0];
        dp[0] = false;
        for (int j = 1; j <= n; ++j) {
            next = false;
            if (p[j-1] != '*') {
                if (pre && (s[i-1] == p[j-1] || '.' == p[j-1])) next = true;
            } else if (j>1) {
                if (dp[j-1] || dp[j-2] || (dp[j] && (s[i-1] == p[j-2] || '.' == p[j-2]))) next = true;
            }
            pre = dp[j];
            dp[j] = next;
        }
    }
    return dp[n];
}
