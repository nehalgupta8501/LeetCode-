class Solution {
public:
    ListNode* removeElements(ListNode* head, int val) {
        ListNode *temp=new ListNode();
        ListNode *prev=new ListNode();
        temp=head;
        prev=head;
        if(head==NULL)
        {
            return nullptr;
        }
        while(temp!=NULL)
        {
            if(temp->val==val)
            {
                prev->next=temp->next;
            }
            else
               prev=temp;
                temp=temp->next;
            
        }
         if(head->val==val)
        {
            head=head->next;
        }
        return head;
    }
};