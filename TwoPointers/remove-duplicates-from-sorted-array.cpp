int Solution::removeDuplicates(vector<int> &a) {
    a.resize(distance(a.begin(), unique(a.begin(), a.end())));
    return a.size();
}
