class Solution {

    public:

        bool hasPathSum(TreeNode* root, int sum) {
            if (root == NULL) return false;

            int next_sum = sum - root->val;

            if (next_sum == 0 && root->left == NULL && root->right == NULL) {
                return true;
            }

            if ( (root->left && hasPathSum(root->left, next_sum)) || (root->right && hasPathSum(root->right, next_sum)) ) {
                return true;
            } else {
                return false;
            }
        }
};
