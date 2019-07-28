   int maxHis(vector<int> row) {
        stack<int> ind;
        int top_val, max_area = 0, area = 0;
        int i = 0, n = row.size();
        while (i < n) {
            if (ind.empty() || row[ind.top()] <= row[i]) ind.push(i++);
            else {
                top_val = row[ind.top()];
                ind.pop();
                area = top_val * i;
                if (!ind.empty())
                    area = top_val * (i - ind.top() - 1);
                max_area = max(area, max_area);
            }
        }
        while (!ind.empty()) {
            top_val = row[ind.top()];
            ind.pop();
            area = top_val * i;
            if (!ind.empty())
                area = top_val * (i - ind.top() - 1);
            max_area = max(area, max_area);
        }
        return max_area;
    }

    int Solution::maximalRectangle(vector<vector<int> >& a) {
        int n = a.size(), m = a[0].size();
        int res = maxHis(a[0]);
        for (int i = 1; i < n; ++i) {
            for (int j = 0; j < m; ++j) if (a[i][j]) a[i][j] += a[i - 1][j];
            res = max(res, maxHis(a[i]));
        }
        return res;
    }
