void Solution::arrange(vector<int> &A) {
    int n = A.size();
    for(int& x : A){
        x += (A[x] % n) * n;
    }
    for(int& x : A){
        x /= n;
    }
}
