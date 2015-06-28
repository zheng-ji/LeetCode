##答题感悟##

* 生成一个头节点来指向

```c
ListNode * head = new ListNode(-1);
ListNode * p = head;

return p = head->next;
delete head;
return p;
```

最后删除头节点, 返回p = head->next

