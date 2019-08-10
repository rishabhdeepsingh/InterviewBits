string Solution::convertToTitle(int A) {
    string s;
    while(A){
        int rem = A % 26;
        char c  = 'Z';
        if(rem){
            c = 'A' + rem - 1;
            A /= 26;
        }else{
            A = A/26 - 1;
        }
        s = c + s;
    }
    return s;
}
