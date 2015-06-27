##答题感悟##

* 双节点移动的题目

* 一开始两个节点都指向 header, 然后第一个节点先走N步，接着同步走, 当第一个节点走到尾部节点的时候，第二个节点的下一个就是要删除的节点了

```c
while (cur->next != NULL) {
    cur = cur->next;
    pre = pre->next;
}

ListNode * tmp = pre->next;
pre->next = tmp->next;
delete tmp;
return head;
```

* 注意如果在第一个节点走N步的时候已经到尾部超出一个的时候，要删除的就是head了

```c
while (i < n && cur != NULL) {
    i++;
    cur = cur->next;
}
if (i == n && cur == NULL) {
    head = head -> next;
    delete pre;
    return head;
}

```

