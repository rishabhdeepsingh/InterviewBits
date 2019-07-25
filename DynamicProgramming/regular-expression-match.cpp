int Solution::isMatch(const string s, const string reg) {
    int pat = reg.size();
    int str = s.size();
    int i = 0, j = 0;
    int ii = -1, jj = -1;
    while(i < str){
        if(s[i] == reg[j] || (j < pat && reg[j] == '?')){
            i++;
            j++;
        }else if(reg[j] == '*' && j < pat){
            jj = j;
            ii = i;
            j++;
        }else if(jj != -1){
            j = jj + 1;
            i = ii + 1;
            ii++;
        }else{
            return 0;
        }
    }
    while(j < pat && reg[j] == '*'){
        j++;
    }
    return j == pat;
}
