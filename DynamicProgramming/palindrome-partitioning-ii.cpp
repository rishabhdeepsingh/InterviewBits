bool isPalindrome(const string& A) {
    int start = 0, end = A.size() - 1;
    while (start < end) {
        if (A[start] != A[end]) break;
        start++;
        end--;
    }
    return start >= end;
}
int Solution::minCut(string A) {
    int n = A.size();
    vector<int> result(n+1);
    result[n] = -1;
    for(int i = n-1; i >= 0; i--) {
        result[i] = n-i-1;
        for(int j = i; j < n; j++) {
            if(isPalindrome(A.substr(i, j-i+1))) {
                result[i] = min(result[i], 1 + result[j+1]);
            }
        }
    }
    return result[0];
}
