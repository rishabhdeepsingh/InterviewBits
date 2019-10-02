const int MOD = (int) 1e9 + 7;
priority_queue<int> q;

int check(int& A){
    long long ans = 0;
    while(A--){
        int top = q.top();
        q.pop();
        q.push(top / 2);
        ans = (ans + top) % MOD;
    }
    return ans;
}

int Solution::nchoc(int A, vector<int> &B) {
    if(B.empty()){
        return 0;
    }
    q = priority_queue <int>();
    for(int x: B) q.push(x);
    return check(A);
}
