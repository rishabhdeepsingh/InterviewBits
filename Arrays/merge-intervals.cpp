vector<Interval> Solution::insert(vector<Interval> &a, Interval n) {
    a.push_back(n);
    sort(a.begin(), a.end(), [&](Interval x, Interval y){return x.start < y.start;});
    vector<Interval> res;
    res.push_back(a[0]);
    for(int i = 1; i < a.size(); ++i){
        if(a[i].start <= res.back().end)
           res.back().end = max(res.back().end, a[i].end);
        else
           res.push_back(a[i]);
    }
    return res;
}
