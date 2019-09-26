vector<vector<int> > Solution::levelOrder(TreeNode* A) {
    int lvl = 1, nextLevel = 0;
    vector<vector<int> > result;
    vector<int> curr;
    queue<TreeNode*> q;
    q.push(A);
    
    while(!q.empty()){
        TreeNode* node=q.front();
        q.pop();

        if(node->left!=NULL){
            q.push(node->left);
            nextLevel++;
        }    
    
        if(node->right!=NULL){
            q.push(node->right);
            nextLevel++;
        }
        
        lvl--;
        curr.push_back(node->val);
        if (lvl == 0) {
            result.push_back(curr);
            lvl = nextLevel;
            nextLevel = 0;
            curr.clear();
        }
    }
    return result;
}
