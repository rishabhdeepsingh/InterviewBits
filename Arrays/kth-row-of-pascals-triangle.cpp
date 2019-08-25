vector<int> Solution::getRow(int n) {
    vector<int> res(n+1,1);
    int c = 1;
    for(int i = 1; i <= n; i++){
        res[i] = c*(n-i+1)/i;
        c = res[i];
    }
    return res;
}
