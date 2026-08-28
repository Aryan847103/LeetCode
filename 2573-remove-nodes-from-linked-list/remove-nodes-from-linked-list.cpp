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
    ListNode* reverse(ListNode* head){
        ListNode* temp=NULL;
        ListNode* prev=NULL;
        ListNode* curr=head;

        while(curr!=NULL){
            temp=curr->next;
            curr->next=prev;
            prev=curr;
            curr=temp;
        }

        return prev;
    }
        ListNode* removeNodes(ListNode* head) {
            int max_ele=INT_MIN;
            ListNode* head1=reverse(head);
            ListNode* temp=head1;
            ListNode* dummy=new ListNode(-1);
            ListNode* newtemp=dummy;
            while(temp!=NULL){
                if(temp->val>=max_ele){
                    max_ele=temp->val;
                    dummy->next=temp;
                    dummy=temp;
                }
                temp=temp->next;
            }
            
            dummy->next=NULL;

            ListNode* newHead=reverse(newtemp->next);

            return newHead;
    }
};