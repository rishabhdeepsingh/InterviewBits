class Solution {
public:
    int maxIncreaseKeepingSkyline(vector<vector<int>>& a) {
        int n = a.size(), m = a[0].size();
        vector<int> row(n, 0);
        vector<int> col(m, 0);
        for(int i = 0; i < n; ++i){
            for(int j = 0; j < m; ++j){
                row[i] = max(row[i], a[i][j]);
            }
        }
        for(int i = 0; i < m; ++i){
            for(int j = 0; j < n; ++j){
                col[i] = max(col[i], a[j][i]);
            }
        }
        int res = 0;
        for(int i = 0; i < n; ++i){
            for(int j = 0; j < m; ++j){
                res += min(row[i], col[j]) - a[i][j];
            }
        }
        return res;
    }
};
