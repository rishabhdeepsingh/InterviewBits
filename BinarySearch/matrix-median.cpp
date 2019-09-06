int Solution::findMedian(vector<vector<int> > &a) {
    int low = INT_MAX, high = INT_MIN;
    int n = a.size(), m = a[0].size();
    for(int i = 0; i < n; ++i){
        low = min(low, a[i][0]);
        high = max(high, a[i][m-1]);
    }
    int median = (n * m + 1)/2;
    while(low < high){
        int mid = (low + high)/2;
        int place = 0;
        for(int i = 0; i < n; ++i){
            place += upper_bound(a[i].begin(), a[i].end(), mid) - a[i].begin();
        }
        if(place < median){
            low = mid + 1;
        } else {
            high = mid;
        }
    }
    return low;
}
