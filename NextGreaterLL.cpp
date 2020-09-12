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
#include<vector>
class Solution {
public:
    vector<int> nextLargerNodes(ListNode* head) {
        ListNode *temp=head, *post=head->next;
        vector<int> ans;
        while(temp->next!=NULL)
        {
            if(post->val>temp->val)
                {
                    ans.push_back(post->val);
                    temp=temp->next;
                    post=temp->next;
                    continue;
                }
            if(temp->val>=post->val)
            {
                if(post!=NULL)
                {
                    post=post->next;
                }
                if(post==NULL)
                {
                    ans.push_back(0);
                    post=temp->next->next;
                    temp=temp->next;
                }
                continue;
            }  
        }
        ans.push_back(0);
        return ans;
    }
};