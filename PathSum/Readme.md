##答题感悟##

* 这道题思路作对了 :)
* 注意递归的出口判断

```c
if (next_sum == 0 && root->left == NULL && root->right == NULL) {
    return true;
}
```
