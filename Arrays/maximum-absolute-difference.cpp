int maxi(int& x, int y){ x = max(x,y);}
int mini(int& x, int y){ x = min(x,y);}

int Solution::maxArr(vector<int> &a) {
    int mx1 = INT_MIN, mx2 = INT_MIN;
    int mn1 = INT_MAX, mn2 = INT_MAX;
    for(int i = 0; i < a.size(); ++i){
        maxi(mx1, a[i] + i);
        mini(mn1, a[i] + i);
        maxi(mx2, a[i] - i);
        mini(mn2, a[i] - i);
    }
    return max(mx1 - mn1, mx2 - mn2);
}
