bool isPrime(int x){
    for(int i = 2; i*i <= x; ++i){
        if(x%i == 0) return 0;
    }
    return 1;
}

vector<int> Solution::primesum(int A) {
    for(int i = 2; i < A; ++i){
        if(isPrime(i) and isPrime(A - i)){
            return {i , A - i };
        }
    }
    return {2, A-2};
}
