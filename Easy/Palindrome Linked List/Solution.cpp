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
    ListNode* temp;
    bool isPalindrome(ListNode* head) {
        temp=head;
        return twoPointerCheck(head);
    }
    bool twoPointerCheck(ListNode* head)
    {
        if(head==nullptr) return true;
        bool equal = twoPointerCheck(head->next) && (head->val==temp->val);
        temp=temp->next;
        return equal;
    }
};