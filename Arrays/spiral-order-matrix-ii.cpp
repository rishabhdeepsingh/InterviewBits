vector<vector<int>> a;
int x;
void res(int s,int e){
    if(e < s) return;
    if(s == e) {
        a[s][s] = x++;
        return;
    }
    for(int i = s    ; i <= e; ++i)  a[s][i] = x++;
    for(int i = s + 1; i <= e; ++i)  a[i][e] = x++;
    for(int i = e - 1; i >= s; --i)  a[e][i] = x++;
    for(int i = e - 1; i >  s; --i)  a[i][s] = x++;
    res(s+1,e-1);
}

vector<vector<int> > Solution::generateMatrix(int n) {
    a.clear();
    a.resize(n, vector<int>(n,0));
    x = 1;
    res(0, n-1);
    return a;
}
