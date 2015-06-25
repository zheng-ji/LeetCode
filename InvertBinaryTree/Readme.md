##答题感悟##

题目的简介还是让人大吃一惊

```
Google: 90% of our engineers use the software you wrote (Homebrew), but you can’t invert a binary tree on a whiteboard so fuck off.
```

* 指针页可以通过交换元素的方式来反转，不过需要注意的是交换过程中也需要把他的子树也翻转
* 需要特别判断长度是否超出，所以才有

```c
TreeNode *tmp;
tmp = root -> left;
root->left = invertTree(root->right);
root->right = invertTree(tmp);
```
