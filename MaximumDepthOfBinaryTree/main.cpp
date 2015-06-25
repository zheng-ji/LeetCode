/**
 *
 *  * Definition for a binary tree node.
 *
 *   * struct TreeNode {
 *
 *    *     int val;
 *
 *     *     TreeNode *left;
 *
 *      *     TreeNode *right;
 *
 *       *     TreeNode(int x) : val(x), left(NULL), right(NULL) {}
 *
 *        * };
 *
 *         */

class Solution {

    public:

        int maxDepth(TreeNode* root) {

            if (root == NULL)
                return 0;

            int num = 1;
            if (root -> left == NULL && root->right == NULL) {
                return num;
            } else {
                num = 1 + max(maxDepth(root->right), maxDepth(root->left));
                return num;
            }
        }
};
