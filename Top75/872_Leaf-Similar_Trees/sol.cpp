class Solution {
public:
    vector<int> r;
    bool leafSimilar(TreeNode* root1, TreeNode* root2) {
        vector<int> temp;
        dfs(root1);
        temp = r;
        r.clear();
        dfs(root2);
        return r == temp;
    }
    int dfs(TreeNode* root) {
        if(root -> left != nullptr) 
            dfs(root -> left);
        if(root -> right != nullptr)
            dfs(root -> right);
        if(root -> left == nullptr && root -> right == nullptr)
            r.emplace_back(root -> val);
            return root -> val;
    }
};
