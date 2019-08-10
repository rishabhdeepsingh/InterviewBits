int Solution::titleToNumber(string A) {
    int n = A.size();
    int res = 0;
    for(char& c : A){
        res *= 26;
        res += c - 'A' + 1;
    }
    return res;
}
