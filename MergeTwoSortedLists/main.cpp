class Solution {

    public:

        ListNode* mergeTwoLists(ListNode* l1, ListNode* l2) {
            ListNode * head = new ListNode(-1);
            ListNode * p = head;
            while(l1 != NULL || l2 != NULL) {
                int val_1 = l1 == NULL? INT_MAX: l1->val;
                int val_2 = l2 == NULL? INT_MAX: l2->val;

                if (val_1 <= val_2) {
                    p ->next = l1;
                    l1 = l1->next;
                } else {
                    p ->next = l2;
                    l2 = l2->next;
                }
                p = p->next;
            }
            p = head ->next;
            delete head;
            return p;
        }

};
