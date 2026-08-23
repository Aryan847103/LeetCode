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
    ListNode* deleteDuplicates(ListNode* head) {

        if(head==NULL || head->next==NULL) return head;
        ListNode* x=head;
        ListNode* y=head->next;

        while(y!=NULL){
            if(x->val==y->val){
                y=y->next;
            }
            else{
                x->next=y;
                x=y;
                y=y->next;
            }
        }
        x->next=NULL;

        return head;
    }
};