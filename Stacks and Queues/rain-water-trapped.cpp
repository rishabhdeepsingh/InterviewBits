int Solution::trap(const vector<int> &a) {
    int res = 0, n = a.size();
    int lo = 0, hi = n - 1;
    int lmx = 0, rmx = 0;
    while(lo <= hi){
        if(a[lo] < a[hi]){
            lmx = max(lmx, a[lo]);
            res += lmx - a[lo++];
        }else{
            rmx = max(rmx, a[hi]);
            res += rmx - a[hi--];
        }
    }
    return res;
}
