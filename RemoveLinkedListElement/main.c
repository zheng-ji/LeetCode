/**
 *
 *Definition for singly-linked list.
 *
 * struct ListNode {
 *
 * int val;
 *
 *  ListNode *next;
 *
 *   ListNode(int x) : val(x), next(NULL) {}
 *
 *};
 *
 * */

class Solution {

    public:

        ListNode* removeElements(ListNode* head, int val) {
            ListNode * dummy = new ListNode(-1);
            dummy->next = head;
            ListNode * pre = dummy, *cur = head;
            while (cur) {
                if (cur->val == val) {
                    ListNode *tmp = cur;
                    pre->next = cur->next;
                    cur = cur->next;
                    delete tmp;
                } else {
                    pre = pre->next;
                    cur = cur->next;
                }
            }
            return dummy->next;
        }
};
