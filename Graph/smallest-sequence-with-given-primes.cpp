vector<int> Solution::solve(int A, int B, int C, int D) {
    vector<int> res;
    if(D == 0) return res;
    set<int> st;
    st.insert(A);
    st.insert(B);
    st.insert(C);
    while(!st.empty()){
        int curr = *st.begin();
        st.erase(st.begin());
        res.push_back(curr);
        if(res.size() == D) return res;
        st.insert(curr * A);
        st.insert(curr * B);
        st.insert(curr * C);
    }
    return res;
}
