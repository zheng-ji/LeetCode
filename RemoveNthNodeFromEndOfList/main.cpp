/**
 *
 *  * Definition for singly-linked list.
 *
 * struct ListNode {
 *  int val;
 *  ListNode *next;
 *  ListNode(int x) : val(x), next(NULL) {}
 * };
 *
 * */

class Solution {

    public:

        ListNode* removeNthFromEnd(ListNode* head, int n) {
            assert(head);
            ListNode *pre = head, *cur = head;
            int i = 0;
            while (i < n && cur != NULL) {
                i++;
                cur = cur->next;
            }

            if (i == n && cur == NULL) {
                head = head -> next;
                delete pre;
                return head;
            }

            while (cur->next != NULL) {
                cur = cur->next;
                pre = pre->next;
            }

            ListNode * tmp = pre->next;
            pre->next = tmp->next;
            delete tmp;
            return head;
        }
};
