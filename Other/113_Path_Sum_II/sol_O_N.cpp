class Solution {
public:
    vector<vector<int>> a;
    vector<vector<int>> pathSum(TreeNode* root, int targetSum) {
        vector<int> ans;
        dfs(ans, root, targetSum);
        return a;
    }
    void dfs(vector<int> &ans, TreeNode* node, int targetSum) {
        if(node == nullptr)
            return;
        targetSum -= node -> val;
        ans.emplace_back(node -> val);
        if(node -> left != nullptr) {
            dfs(ans, node -> left, targetSum);
        }
        if(node -> right != nullptr) {
            dfs(ans, node -> right, targetSum);
        }
        if(node -> left == nullptr && node -> right == nullptr) {
            if(targetSum == 0) {
                a.emplace_back(ans);
            }
        }
        ans.pop_back();
        return;
    }
};
