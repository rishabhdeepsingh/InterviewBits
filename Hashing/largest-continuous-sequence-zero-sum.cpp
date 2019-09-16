vector<int> Solution::lszero(vector<int> &A) {
    map<int, int> mp;
    vector<int> v;
    mp[0] = -1;
    int sum = 0;
    int st = -1, ed = -1, max_l = INT_MIN;
    for(int i = 0; i < A.size(); i++){
        sum += A[i];
        if(mp.find(sum) != mp.end()){
            if(max_l < i - mp[sum]){
                st = mp[sum] + 1;
                ed = i;
                max_l = i - mp[sum];
            }
        } else {
            mp[sum] = i;
        }
    }
    if(st >=0 && ed >= 0){
        v = vector<int>(A.begin() + st, A.begin() + ed + 1);
    }
    return v;
}
