class Solution {
public:
    TreeNode* searchBST(TreeNode* root, int val) {
        while(root != nullptr && root -> val != val) {
            if(val > root -> val) {
                root = root -> right;
            }
            else if(val < root -> val) {
                root = root -> left;
            }
        }
        if(root == nullptr)
            return nullptr;
        else
            return root;
    }
};
