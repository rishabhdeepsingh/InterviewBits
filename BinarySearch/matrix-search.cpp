int Search(vector<int>& a,int v){
    int l = 0, h = a.size();
    int mid = (h  + l)/2;
    while(l <= h){
        mid = (h + l)/2;
        if(a[mid] == v){
            return 1;
        }else if(a[mid] < v){
            l = mid + 1;
        }else{
            h = mid - 1;
        }
    }
    return a[mid] == v;
}

int Solution::searchMatrix(vector<vector<int> > &a, int val) {
    int l = 0;
    int h = a.size();
    for(int m = 0; m < h; ++m){
        if(a[m][0] <= val and val <= a[m].back()){
            return Search(a[m], val);
        }
    }
    return 0;
}
