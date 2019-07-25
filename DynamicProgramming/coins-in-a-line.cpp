int dp[1002][1002][2];
vector<int> v;
int solve(int i, int j, int s) {
    if (i > j)return 0;
    if (dp[i][j][s])return dp[i][j][s];
    if (!s) {
        return dp[i][j][s] = max(v[j] + solve(i, j - 1, 1), v[i] + solve(i + 1, j, 1));
    } else {
        return dp[i][j][s] = min(solve(i, j - 1, 0), solve(i + 1, j, 0));
    }
}
int Solution::maxcoin(vector<int>& A) {
    memset(dp, 0, sizeof(dp));
    v = A;
    return solve(0, A.size() - 1, 0);
}
