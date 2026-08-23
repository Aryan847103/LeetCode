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
    ListNode* removeNthFromEnd(ListNode* head, int n) {

        if(head == NULL)
            return NULL; 
        
        ListNode* frnt=head;
        ListNode* end=head;
        while(n){
            frnt=frnt->next;
            n--;
        }
        if(frnt == NULL)
            return head->next;
        while(frnt->next!=NULL){
            frnt=frnt->next;
            end=end->next;
        }

        end->next=end->next->next;
        return head;
    }
};