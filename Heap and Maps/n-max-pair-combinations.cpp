vector<int> Solution::solve(vector<int>& A, vector<int>& B) {
    priority_queue<pair<int, pair<int, int> > > pq;
    set<pair<int, int> > S;
    int n = A.size();
    sort(A.begin(), A.end());
    sort(B.begin(), B.end());
    auto Add = [&](int x, int y) {
        pq.push({A[x] + B[y], {x, y}});
        S.insert({x, y});
    };

    Add(n - 1, n - 1);
    vector<int> ans;
    int k = n;
    while (k--) {
        auto top = pq.top();
        pq.pop();
        ans.push_back(top.first);
        int L = top.second.first;
        int R = top.second.second;
        if (!S.count({L, R - 1})) Add(L, R - 1);
        if (!S.count({L - 1, R})) Add(L - 1, R);
    }
    return ans;
}
