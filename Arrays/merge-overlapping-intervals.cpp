vector<Interval> Solution::merge(vector<Interval> &a) {
    sort(a.begin(), a.end(), [&](Interval a, Interval b){return a.start < b.start;});
    vector<Interval> res;
    res.push_back(a[0]);
    for(int i = 1; i < a.size(); i++){
        if(a[i].start <= res.back().end)
            res.back().end = max(res.back().end, a[i].end);
        else
         res.push_back(a[i]);
    }
    return res;
}
