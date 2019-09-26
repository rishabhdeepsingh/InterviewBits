vector<int> dx = {0, 0, -1, 1};
vector<int> dy = {1, -1, 0, 0};
int n, m;
vector<vector<char>> res; // No need to take if we use address of original vector

void dfs(int x, int y) {
    if ((x >= 0 and y >= 0 and x < n and y < m) and res[x][y] == 'O') {
        debug() << pr(x) pr(y) pr(res);
        res[x][y] = '-';
        for (int i = 0; i < 4; ++i) {
            dfs(x + dx[i], y + dy[i]);
        }
    }
}

void Solution::solve(vector<vector<char>>& a) {
    n = a.size();
    m = a[0].size();
    res = a;
    for (int i = 0; i < n; ++i) {
        dfs(i, 0);
        dfs(i, m - 1);
    }
    for (int i = 0; i < m; ++i) {
        dfs(0, i);
        dfs(n - 1, i);
    }
    for (int i = 0; i < n; ++i) {
        for (int j = 0; j < m; ++j) {
            if (res[i][j] == 'O') res[i][j] = 'X';
            if (res[i][j] == '-') res[i][j] = 'O';
        }
    }
    a = res;
}
