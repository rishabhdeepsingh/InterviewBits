const int MOD = (int) 1000003;

int Solution::findRank(string s) {
    int n = s.size();
    vector<int> fact(MOD, 1);
    for(int i = 1; i < MOD; ++i){
        fact[i] = (i * fact[i-1]) % MOD;
    }
    vector<int> a;
    for(int i = 0; i < n; ++i){
        int cnt = 0;
        for(int j = i; j < n; ++j){
            if(s[i] > s[j]){
                cnt++;
            }
        }
        a.push_back(cnt);
    }
    reverse(a.begin(), a.end());
    long long ans = 0;
    for(int i = 0; i < n; ++i){
        ans += (a[i] * fact[i]) % MOD;
    }
    return (ans + 1) % MOD;
}
