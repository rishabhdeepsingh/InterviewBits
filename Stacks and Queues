int Solution::trap(const vector<int> &a) {
    int res = 0, n = a.size();
    int lo = 0, hi = n - 1;
    int lmx = 0, rmx = 0;
    while(lo <= hi){
        if(a[lo] < a[hi]){
            if(a[lo] > lmx){
                lmx = a[lo];
            }else{
                res += lmx - a[lo];
            }
            lo++;
        }else{
            if(a[hi] > rmx){
                rmx = a[hi]; 
            }else{
                res += rmx - a[hi]; 
            }
            hi--;
        }
    }
    return res;
}
