int Solution::solve(vector<int> &a) {
    sort(a.begin(), a.end());
    int n = a.size();
    for(int i = 0; i < n - 1; ++i){
        if(a[i] == a[i+1]) continue;
        if(a[i] == n - 1 - i) return 1;
    }
    if(a[n - 1] == 0) return 1;
    return -1;
}
