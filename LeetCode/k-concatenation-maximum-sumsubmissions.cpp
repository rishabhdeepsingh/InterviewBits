class Solution {
public:
    const int MOD = (int) 1e9 + 7;
    typedef long long ll;
    int kConcatenationMaxSum(vector<int>& a, int k) {
        int n = a.size();
        ll sum = accumulate(a.begin(), a.end(), 0ll);
        ll res = 0, acc = 0;
        for (int x: a) {
            acc += x;
            if (acc < 0) acc = 0;
            res = max(res, acc);
        }
        if (k >= 2) {
            vector<int> l = a, r = a;
            for (int i = 1; i < n; ++i) l[i] += l[i - 1];
            for (int i = n - 2; i >= 0; --i) r[i] += r[i + 1];
            ll curr = 0;
            curr += max(0, *max_element(l.begin(), l.end()));
            curr += max(0, *max_element(r.begin(), r.end()));
            curr += max(0ll, sum * (k - 2));
            res = max(res, curr);
        }
        return res % MOD;
    }
};
