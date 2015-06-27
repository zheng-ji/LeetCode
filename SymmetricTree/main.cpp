class Solution {

    public:

        bool isSymmetric(TreeNode* root) {
            if (root == NULL) return true;
            return is_sym(root->left, root->right);
        }

        bool is_sym(TreeNode * left, TreeNode *right) {
            if (left == NULL) {
                return right == NULL;
            } 

            if (right == NULL) {
                return left == NULL;
            }

            if (left->val != right->val) {
                return false;
            }

            if (!is_sym(left->left,right->right)) {
                return false;
            }

            if (!is_sym(left->right,right->left)) {
                return false;
            }

            return true;
        }
};
