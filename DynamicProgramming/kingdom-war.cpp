int Solution::solve(vector<vector<int> > &A) {
    int n = A.size();
    int m = A[0].size();
    
    vector<int> dp(m, 0);
    int maxs = 0, tmp = A[0][0];
    for(int i = n-1; i >= 0; i--){
        for(int j = 0; j < m; j++)
           dp[j] += A[i][j], tmp = max(tmp, A[i][j]);
          
        int tmps = 0;
        for(int j = m-1; j >= 0 && dp[j] > 0; j--)
            tmps += dp[j];
        maxs = max(maxs, tmps);
    }
    if(maxs == 0)//no positive
        maxs = tmp;
    return maxs;
}
