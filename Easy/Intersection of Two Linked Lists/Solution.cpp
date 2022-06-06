/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     ListNode *next;
 *     ListNode(int x) : val(x), next(NULL) {}
 * };
 */
class Solution {
public:
ListNode *getIntersectionNode(ListNode *headA, ListNode *headB) {
    ListNode *newHeadA=headA,*newHeadB=headB;
    int sizeA=0,sizeB=0;
    while(headA!=NULL)
    {
        sizeA++;
        headA=headA->next;
    }

    while(headB!=NULL)
    {
        sizeB++;
        headB=headB->next;
    }

    while(sizeA>sizeB)
    {
        newHeadA =newHeadA->next;
        sizeA--;
    }
    while(sizeA<sizeB)
    {
        newHeadB =newHeadB->next;
        sizeB--;
    }

    while(newHeadA!=NULL && newHeadB!=NULL)
    {
        if(newHeadA == newHeadB)
        {
            return newHeadA;
        }

        newHeadA = newHeadA->next;
        newHeadB = newHeadB->next;
    }
    return NULL;
}
};