vector<int> Solution::twoSum(const vector<int> &A, int B) {
    vector<int> res;
    if(A.size() < 2) return res;
    map<int, int> mp;
    for(int i = 0; i < A.size(); ++i){
        int sum = B - A[i];
        if(mp.count(sum)){
            res.push_back(mp[sum] + 1);
            res.push_back(i + 1);
            return res;
        }
        if(!mp.count(A[i])){
            mp[A[i]] = i;
        }
    }
    return res;
}
