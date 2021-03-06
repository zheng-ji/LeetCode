class Solution {

    public:
        vector<vector<int>> levelOrder(TreeNode* root) {

            vector<vector<int>> res;
            if (root == NULL) 
                return res;

            queue<TreeNode*> q;
            q.push(root);
            vector<int> level_vector;
            int node_cur = 1, node_next = 0;

            while(!q.empty()) {

                TreeNode * cur = q.front();
                q.pop();
                level_vector.push_back(cur->val);
                node_cur -= 1;

                if (cur-> left) {
                    node_next += 1;
                    q.push(cur->left);
                }
                if (cur-> right) {
                    node_next += 1;
                    q.push(cur->right);
                }

                if (node_cur == 0) {
                    res.push_back(level_vector);
                    level_vector.clear();
                    node_cur = node_next;
                    node_next = 0;
                }
            }

            return res;
    };
}
