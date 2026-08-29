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
    ListNode* swapNodes(ListNode* head, int k) {
        ListNode* slow=head;
        ListNode* fast=head;
        ListNode* first=NULL;
        int x=0;

        while(k-1 && fast->next!=NULL){
            fast=fast->next;
            k--;
        }
        first=fast;

        while(fast->next!=NULL){
            slow=slow->next;
            fast=fast->next;
        }

        x=first->val;
        first->val=slow->val;
        slow->val=x;

        return head;
    }
};