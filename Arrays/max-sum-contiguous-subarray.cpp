int Solution::maxSubArray(const vector<int> &A) {
    int mx = INT_MIN;
    int sum = 0;
    for(int x: A){
        sum += x;
        mx = max(mx, sum);
        if(sum < 0) sum = 0;
    }
    return mx;
}
