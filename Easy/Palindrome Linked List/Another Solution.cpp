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
    bool isPalindrome(ListNode* head) {
        int size=1;
        ListNode* tmpHead=head;
        while(tmpHead->next)
        {
            size++;
            tmpHead=tmpHead->next;
        }
        if(size==1) return true;
        stack<int> s;
        for(int i=0;i<size/2;i++)
        {
            s.push(head->val);
            head=head->next;
        }
        for(int i=size/2;i<size;i++)
        {
            if(s.top()==head->val)
                s.pop();
            head=head->next;
        }
        return s.empty();
    }
};