int MOD = (int) 1e9+7;
int Solution::chordCnt(int n) {
    long long dp[n+1];
    if(n==0||n==1)
     return 1;
    else if(n==2)
     return 2;
    else if(n>2){
        dp[0]=1;
        dp[1]=1;
        dp[2]=2;
        for(int i=3;i<=n;i++){
            dp[i]=0;
            for(int k=0;k<i;k++){
                dp[i] += dp[i - k - 1] * dp[k];
                dp[i] %= MOD;
            }
        }
       
    }
     return dp[n];
}
