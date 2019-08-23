string Solution::simplifyPath(string a) {
    stack<string> st;
    int n = a.size();
    string s;
    for(int i = 0; i < n; ++i){
        if(a[i] == '/'){
            continue;
        }else if(a[i] == '.'){
            if(i < n and a[i+1] == '.'){
                if(!st.empty()) st.pop();
                i++;
            }
        }else{
            s = "";
            while(i < n and a[i] != '/'){
                s += a[i++];
            }
            st.push(s);
        }
    }
    string ans = "";
    while(!st.empty()){
        ans = "/" + st.top() + ans;
        st.pop();
    }
    if(ans == "") ans = "/";
    return ans;
}
