void Solution::rotate(vector<vector<int> > &a) {
    int n = a.size();
    for (int i = 0; i < n / 2; i++) {
        for (int j = i; j < n - i - 1; j++) {
        int x = n - i - 1;
        int y = n - j - 1;
        int tmp = a[i][j];
        a[i][j] = a[y][i];
        a[y][i] = a[x][y];
        a[x][y] = a[j][x];
        a[j][x] = tmp;
        }
    }
}
    
