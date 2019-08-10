const int MOD = (int)1e9 + 7;

int Solution::hammingDistance(const vector<int> &a) {
    int n = a.size();
    long long res = 0;
    for(int mask = 0; mask < 32; ++mask){
        long long cnt = 0;
        for(int i = 0; i < n; ++i){
            if(a[i] & (1 << mask))
                cnt++;
        }
        res += (cnt * (n - cnt) * 2) % MOD;
        res %= MOD;
    }
    return res;
}
