int Solution::trailingZeroes(int A) {
    int res = 0;
    int x = 5;
    while(A/x){
        res += A / x;
        x *= 5;
    }
    return res;
}
