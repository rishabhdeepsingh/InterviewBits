int dx[] = {0,0,1,1,1,-1,-1,-1};
int dy[] = {1,-1,0,1,-1,0,1,-1};

string Solution::solve(int n, int m, int C, int D, vector<int> &E, vector<int> &F) {
    int vis[n+1][m+1];
    memset(vis, 0, sizeof(vis));
    for(int i = 0; i <= n; ++i) for(int j = 0; j <=m; ++j)for(int k = 0; k < C; ++k)
    if(sqrt(pow(E[k] - i, 2) + pow(F[k] - j, 2)) <= D){
        vis[i][j] = 1;
        break;
    }
    if(vis[0][0] == 1 || vis[n][m] == 1) return "NO";
    queue<pair<int,int>> q;
    q.push({0,0});
    vis[0][0] = 1;
 
    while(!q.empty()){
        int x = q.front().first;
        int y = q.front().second;
        q.pop();
 
        if(x==n && y==m) return "YES";
 
        for(int i=0;i<8;i++){
            int newx = x + dx[i];
            int newy = y + dy[i];
            if(newx>=0 && newx<=n && newy>=0 && newy<=m && !vis[newx][newy]){
                vis[newx][newy] = 1;
                q.push({newx,newy});
            }
        }
    }
    return "NO";
}
