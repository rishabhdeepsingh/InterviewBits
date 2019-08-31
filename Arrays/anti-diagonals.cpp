vector<vector<int> > Solution::diagonal(vector<vector<int> > &A) {
    int n = A.size();
    //number of vectors in ans
    vector<vector<int>> ans(2*n-1);
    for(int i = 0; i < n; i++){
        for(int j = 0; j < n; j++)
            ans[i + j].push_back(A[i][j]);
            //sum of index values in 2d array gives the index in ans
    }
    return ans;
}
