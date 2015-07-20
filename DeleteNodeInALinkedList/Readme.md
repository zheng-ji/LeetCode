##答题感悟##

* 在没有前继节点情况下删除节点

交换变量，使得问题变成删除该节点的下一个节点

```
node->val = node->next->val;
node->next = node->next->next;
```
