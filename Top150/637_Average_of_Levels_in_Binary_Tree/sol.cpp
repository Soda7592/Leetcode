class Solution {
public:
    vector<double> averageOfLevels(TreeNode* root) {
        vector<double> ans;
        queue<TreeNode*> temp;
        queue<TreeNode*> q;
        double sum=0;
        int nodes=0;
        q.push(root);
        while(!q.empty()) {
            sum = 0;
            nodes = 0;
            while(!q.empty()){
                TreeNode* cur = q.front();
                q.pop();
                sum += cur -> val;
                nodes++;
                if(cur -> left != nullptr)
                    temp.push(cur -> left);
                if(cur -> right != nullptr)
                    temp.push(cur -> right);
            }
            ans.emplace_back(sum/nodes);
            q = temp;
            while(!temp.empty()) temp.pop();
        }
        return ans;
    }
};
