vector<int> Solution::maxset(vector<int> &A) {
    long long mx_sum = 0, sum = 0, n = A.size();
    vector<int> res, temp;
    for(int i = 0; i < n; ++i){
        if(A[i] < 0){
            sum = 0;
            temp.clear();
        }else{
            sum += A[i];
            temp.push_back(A[i]);
        }
        if(sum > mx_sum || (sum == mx_sum and res.size() < temp.size())){
            mx_sum = sum;
            res = temp;
        }
    }
    return res;
}
