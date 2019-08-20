int Solution::solve(string s) {
    int n = s.size();
    vector<int> a(n, 0);
    for(int i = n - 1; i >= 0; --i){
        int prev = 0;
        for(int j = i; j < n; ++j){
            if(i == j){
                a[i] = 1;
            } else if(s[i] == s[j]){
                int temp = a[j];
                a[j] = prev + 2;
                prev = temp;
            } else {
                prev = a[j];
                a[j] = max(a[j], a[j-1]);
            }
        }
    }
    return a[n-1];
}
