int reverse(int A) {
    bool neg = A < 0;
    if(neg){
        A *= -1;
    }
    int res = 0;
    while(A){
        if(res > INT_MAX / 10) return 0;
        res *= 10;
        res += A%10;
        A /= 10;
    }
    if(neg) res *= -1;
    return res;
}

int Solution::isPalindrome(int A) {
    if(A < 0) return 0;
    return A == reverse(A);
}
