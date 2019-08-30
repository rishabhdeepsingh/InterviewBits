vector<int> Solution::wave(vector<int> &a) {
    int n = a.size();
    int i = 0, j = n - 1;
    sort(a.begin(), a.end());
    for(int i = 1; i < n; i += 2){
        swap(a[i], a[i-1]);
    }
    return a;
}
