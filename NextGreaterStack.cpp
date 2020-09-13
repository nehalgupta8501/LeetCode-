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

        vector<int> res;
        for(auto p=head; p!=NULL; p=p->next)
        {
            res.push_back(p->val);
        }
        stack<int> st;
        int n=res.size()-1;
        for(int i=n; i>=0; i--)
        {   int next=0;
            while(!st.empty() && st.top()<=res[i])
            {
                st.pop();
            }
            if(!st.empty() && st.top()>res[i])
            {
                next=st.top();
            }
            st.push(res[i]);
            res[i]=next;
        }
        return res;
    }