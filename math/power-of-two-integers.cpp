
int Solution::isPower(int A) {
    if(A == 1 || A == 0) return 1;
    for(int i = 2; i < 32; ++i){
        for(int j = 2; j <= pow(INT_MAX, 1.0f/i); ++j)
            if(A == pow(j, i)) return 1;
    }
    return 0;
}
