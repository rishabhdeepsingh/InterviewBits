class Solution {
public:
    string removeDuplicates(string s, int k) {
        stack<pair<char, int>> st;
        for(auto& c: s){
            if(st.empty()){
                st.push({c, 1});
            } else {
                auto tp = st.top();
                if(tp.first != c){
                    st.push({c, 1});
                }else if(tp.second + 1 < k){
                    st.pop();
                    st.push({c, tp.second + 1});
                }else{
                    st.pop();
                }
            }
        }
        string ans;
        while(!st.empty()){
            auto top = st.top();
            st.pop();
            ans = string(top.second, top.first) + ans;
        }
        return ans;
    }
};
