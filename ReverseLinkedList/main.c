/**
  Definition for singly-linked list.
  struct ListNode {
    int val;
    struct ListNode *next;
};
*/

struct ListNode* reverseList(struct ListNode* head) {
    if (head == NULL) return head;
    struct ListNode *q, *p, *s;
    for (p = head, q = NULL; NULL != p;) {
        s = p -> next;
        p->next = q;
        q = p;
        p = s;
    }
    return q;
}
