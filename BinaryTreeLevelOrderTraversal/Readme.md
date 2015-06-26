##答题感悟##


* BFS 典型,构造一个队列来存储顺序，首先插入 root 节点, node_cur = 1;

```c
queue<TreeNode*> q;
q.push(root);
vector<int> level_vector;
int node_cur = 1, node_next = 0;
```

* while 循环直到队列为空, 遇到有子节点，node_next += 1; 插入队列

* 通过node_cur = 0 来更新 vector<vector<int>> res; node_cur = nod_next 表示这一层有多少个节点，然后清空当层的level_vector节点值

```c
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

```
