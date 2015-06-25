##答题感悟##

*　需要三个节点，假设第一个节点已经是完整翻转了，第二个节点准备翻转，第三个节点是为了存着继续向下操作,其中q初始值为NULL, p是Head, s=p->next
* 然后慢慢移动p, 直到p＝NULL,这个时候返回q

```c

struct ListNode *q, *p, *s;

for (p = head, q = NULL; NULL != p;) {
    s = p -> next;
    p->next = q;
    q = p;
    p = s;
}
```
