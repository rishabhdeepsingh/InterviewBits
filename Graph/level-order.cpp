vector<vector<int> > Solution::levelOrder(TreeNode* A) {
    vector<vector<int>> res;
    vector<int> temp;
    queue<TreeNode*> q;
    queue<int> level;
    
    q.push(A);
    level.push(0);
    
    while(!q.empty()){
        TreeNode* curr = q.front(); q.pop();
        int lvl = level.front(); level.pop();
        
        if(res.size() != lvl + 1){
            res.push_back(temp);
        }
        res[lvl].push_back(curr->val);
        if(curr->left != NULL){
            q.push(curr->left);
            level.push(lvl+1);
        }
        if(curr->right != NULL){
            q.push(curr->right);
            level.push(lvl+1);
        }
    }
    return res;
}
