##答题感悟##

* 判断树的高度

* 除了判断子树两边的高度差，还需要判断左右子树是否都是　`BalancedBinaryTree`
* 特别判断长度是否超出，所以才有

```c
if (root == NULL)
    return true;
if (root->left == NULL && root->right == NULL)
    return true
if (abs(depth(root->left) - depth(root->right)) > 1)
    return false;
return isBalanced(root->left) && isBalanced(root->right);

```

