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
    ListNode* removeElements(ListNode* head, int val) {
        ListNode* temp=head;
        ListNode* back = new ListNode(-1);
        ListNode* newhead=back;
        if(head==NULL) return NULL;
        back->next=temp;
        while(temp!=NULL){
            if(temp->val!=val){
                back=temp;
                temp=temp->next;
            }
            else{
                temp=temp->next;
            }
            back->next=temp;
        }
        return newhead->next;
    }
};