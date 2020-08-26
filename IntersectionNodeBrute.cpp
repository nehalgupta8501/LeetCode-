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
        ListNode *pA=headA, *pB;
        while(pA!=NULL)
        {
            for(pB=headB; pB!=NULL; pB=pB->next)
            {
                if(pA==pB)
                {
                    return pA;
                }
            }
            pA=pA->next;
        }
        return NULL;
    }
};