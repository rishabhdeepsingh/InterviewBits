string Solution::largestNumber(const vector<int> &A) {
    string res;
    vector<string> a;
    for(auto s: A) a.push_back(to_string(s));
    sort(a.begin(), a.end(), [&](string x, string y){
        string xy = x + y;
        string yx = y + x;
        return xy > yx;
    });
    for(string s: a){
        res += s;
    }
    int i = 0;
    while(res[i] == '0') i++;
    if(i == res.size()) res = "0";
    return res;
}
