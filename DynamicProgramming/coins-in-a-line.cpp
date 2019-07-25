int Solution::maxcoin(vector<int>& A) {
    int n = A.size();
    int table[2][n];
    memset(table, 0, sizeof(table));
    for (int sz = 2; sz <= n; sz += 2) {
        for (int i = 0; i < n - sz + 1; i++) {
            int j = i + sz - 1;
            int temp1 = A[i] + min(table[0][i + 1], table[0][i + 2]);
            int temp2 = A[j] + min(table[0][i + 1], table[0][i]);
            table[1][i] = max(temp1, temp2);
        }
        for (int i = 0; i < n - sz + 1; i++) {
            table[0][i] = table[1][i];
        }
    }
    return table[1][0];
}
