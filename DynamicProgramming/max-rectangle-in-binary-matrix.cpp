int getArea(vector<int>& a, stack<int>& s, int i){
    int top_val = a[s.top()];
    s.pop();
    if(s.empty()){
        return top_val * i;
    }else{
        return top_val * (i - s.top() - 1);
    }
}
int maxHis(vector<int> a){
    stack<int> result;
    int top_val, max_area = 0;
    int i = 0, n = a.size();
    while(i < n){
        if(result.empty() || a[result.top()] <= a[i]){
           result.push(i++);
        } else {
            int area = getArea(a, result, i);
            max_area = max(area, max_area); 
        }
    }
    while(!result.empty()){
        int area = getArea(a, result, i);
        max_area = max(area, max_area); 
    }
    return max_area;
}

int Solution::maximalRectangle(vector<vector<int> > &a) {
    int n = a.size(), m = a[0].size();
    int res = maxHis(a[0]);
    for(int i = 1; i < n; ++i){
        for(int j = 0; j < m; ++j) if(a[i][j]) a[i][j] += a[i-1][j];
        res = max(res, maxHis(a[i]));
    }
    return res;
}
