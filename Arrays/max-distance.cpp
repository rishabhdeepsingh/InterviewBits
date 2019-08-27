int Solution::maximumGap(const vector<int> &a) {
    int n = a.size();
    vector<pair<int, int>> v;
    for(int i = 0; i < n; ++i){
        v.emplace_back(a[i], i);
    }
    sort(v.begin(), v.end());
    int ans = 0;
    int mx = v.back().second;
    for(int i = n - 2; i >= 0; --i){
        ans = max(ans, mx - v[i].second);
        mx = max(mx, v[i].second);
    }
    return ans;
}
