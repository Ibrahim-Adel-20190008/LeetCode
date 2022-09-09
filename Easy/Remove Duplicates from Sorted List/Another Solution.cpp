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
    ListNode* deleteDuplicates(ListNode* head) {
        ListNode* result = new ListNode(-200);
        ListNode* tmpresult=result;
        while(head)
        {
            if(tmpresult->val!=head->val)
            {
                tmpresult->next=head;
                tmpresult=tmpresult->next;
            }
            else
                tmpresult->next=nullptr;
            head=head->next;
        }
        return result->next;
    }
};