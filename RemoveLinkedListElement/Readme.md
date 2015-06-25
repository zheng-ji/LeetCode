##答题感悟##

* 借助

```
ListNode * dummy = new ListNode(-1)
dummy->next = head;
```

的思想避免指针丢失，最后返回dummy->next 非常好


* pre,cur 指针亦步亦趋
