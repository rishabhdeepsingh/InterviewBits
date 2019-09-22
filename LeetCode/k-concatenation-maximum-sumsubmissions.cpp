class Solution {
public:
    const int MOD = (int) 1e9 + 7;
    typedef long long ll;
    int kConcatenationMaxSum(vector<int>& arr, int k) {
        ll n = arr.size();
        ll sum = arr[0], mx = max(0, arr[0]);
        ll total = accumulate(arr.begin(), arr.end(), 0);
        for (int i = 1; i < n * min(k, 2); i++) {
            sum = max((ll) arr[i % n], sum + arr[i % n]);
            mx = max(mx, sum);
        }
        return (max( 0ll, total * (k - 2)) + mx) % MOD;
    }
};
