int Solution::pow(int x, int n, int d) {
    if(x == 0) return 0;
    if(n == 0) return 1 % d;
    long long res = 1, base = x;
    while(n > 0){
        if(n&1){
            res = (res * base) % d;
            n--;
        }
        base = (base * base) % d;
        n /= 2;
    }
    if(res < 0) res += d;
    return res % d;
}
