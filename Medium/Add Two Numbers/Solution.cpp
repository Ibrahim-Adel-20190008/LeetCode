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
    int length (ListNode* list)
    {
        int size=0;
        while(list!=nullptr)
        {
            size++;
            list = list->next;
        }
        return size;
    }
    
    ListNode* addTwoNumbers(ListNode* list1, ListNode* list2) {
        int size1 = length(list1), size2 =length(list2);
        if(size2>size1)
        {
            swap(list1,list2);
            swap(size1,size2);
        }
        
        int remaining=0,sum;
        ListNode* result =new ListNode();
        ListNode* headResult =result;
        
        while(list2!=nullptr)
        {   
            sum = (list1->val +list2->val+remaining);
            ListNode* current =new ListNode(sum %10);
            result->next = current;
            result =current;
            remaining = sum>9?1:0;
            list2 = list2->next;
            list1 = list1->next;
        }
        
        while(list1!=nullptr)
        {
            sum = (list1->val + remaining);
            ListNode* current =new ListNode(sum %10);
            result->next = current;
            result =current;
            remaining = sum>9?1:0;
            list1 = list1->next;
        }
        if(remaining)
        {
            ListNode* current =new ListNode(remaining %10);
            result->next = current;
            result =current;
        }
        return headResult->next;
    }
};