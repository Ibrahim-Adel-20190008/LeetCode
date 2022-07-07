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
    ListNode* mergeTwoLists(ListNode* list1, ListNode* list2) {
        ListNode* result = new ListNode(0,new ListNode());
        ListNode* tmpresult = result;
        while(list1 && list2)
        {
            if(list1->val>list2->val)
            {
                ListNode* tmp= new ListNode(list2->val,new ListNode());
                tmpresult->next=tmp;
                tmpresult=tmpresult->next;
                list2 = list2->next;
            }
            else
            {
                ListNode* tmp= new ListNode(list1->val,new ListNode());
                tmpresult->next=tmp;
                tmpresult=tmpresult->next;
                list1 = list1->next;
            }
        }
        while(list1)
        {
                ListNode* tmp= new ListNode(list1->val,new ListNode());
                tmpresult->next=tmp;
                tmpresult=tmpresult->next;
                list1 = list1->next;
        }
        while(list2)
        {
                ListNode* tmp= new ListNode(list2->val,new ListNode());
                tmpresult->next=tmp;
                tmpresult=tmpresult->next;
                list2 = list2->next;
        }
        tmpresult->next=nullptr;
        return result->next;
    }
};