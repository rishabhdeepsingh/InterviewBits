class Solution {
public:
    vector<int> postorder(Node* root) {
        vector<int> res;
        if(root == NULL) return res;
        stack<Node*> stk;
        stk.push(root);
        while(!stk.empty()){
            Node* temp = stk.top();
            stk.pop();
            for(Node* child: temp->children) stk.push(child);
            res.push_back(temp->val);
        }
        reverse(res.begin(), res.end());
        return res;
    }
};
