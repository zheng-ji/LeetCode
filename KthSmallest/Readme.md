分三种情况
左子树的个数 left

* left + 1 == K ,那么就是root->value;
* left < k, 那么就在右子树查找 calue(root->right, k-left-1)
* left > k, 那么就在右子树查找 calue(root->right, left-k)
