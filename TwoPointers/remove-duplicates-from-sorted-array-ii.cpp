int Solution::removeDuplicates(vector<int> &a) {
    int n = a.size();
    int count = 0;
    for (int i = 0; i < n; i++) { 
        if (i < n - 2 && a[i] == a[i+1] && a[i] == a[i+2]){
            continue;
        } else {
            a[count++] = a[i];
        }
    }
    return count;
}
