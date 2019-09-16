using ll = long long;

int Solution::colorful(int A) {
    vector<int> vec;
    while(A){
        vec.insert(vec.begin(), A % 10);
        A /= 10;
    }
    unordered_map<ll, ll> mp;
    for(int i = 0; i < vec.size(); i++){
        ll value = 1;
        for(int j = i; j < vec.size(); j++){
            value *= vec[j];
            if(mp.count(value)){
                return 0;
            }
            mp[value] = value;
        }
    }
    return 1;
}
