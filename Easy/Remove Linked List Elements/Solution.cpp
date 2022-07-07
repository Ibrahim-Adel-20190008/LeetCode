/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     ListNode *next;
 *     ListNode() : val(0), next(nullptr) {}
 *     ListNode(int x) : val(x), next(nullptr) {}
 *     ListNode(int x, ListNode *next) : val(x), next(next) {}
 * };
 */
class Solution {
public:
    ListNode* removeElements(ListNode* head, int val) {
        ListNode* tmphead = new ListNode(0,head);
        ListNode* result = tmphead;
        while(head)
        {
            while(head && head->val==val)
            {
                tmphead->next = head->next;
                head = head->next;
            }
            tmphead=tmphead->next;
            head= head?head->next:head;
        }
        return result->next;
    }
};