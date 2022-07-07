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
    ListNode* removeNthFromEnd(ListNode* head, int n) {
     ListNode* result=head;
        int size=1;
        while(head->next!=nullptr)
        {
            size++;
            head=head->next;
        }
        int target = size-n-1;
        if(target==-1)
        {
            return result->next;
        }
        ListNode* tmp = result;
        while(target--)
            tmp=tmp->next;
        tmp->next = tmp->next->next;   
        return result;
    }
};