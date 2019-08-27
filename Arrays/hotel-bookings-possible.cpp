bool Solution::hotel(vector<int> &a, vector<int> &d, int K) {
    sort(a.begin(), a.end());
    sort(d.begin(), d.end());
    int i = 0, j = 0, c = 0;
    while(i < a.size() && j < d.size()){
        if(a[i] < d[j]){
            c++;
            i++;
        }else{
            c--;
            j++;
        }
        if(c > K) return false;
    }
    return true;
}
