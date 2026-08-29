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
    ListNode* mergeTwoLists(ListNode* list1, ListNode* list2) {
        ListNode* dummy=new ListNode(-1);
        ListNode* newhead=dummy;
        ListNode* temp1=list1;
        ListNode* temp2=list2;

        while(temp1!=NULL && temp2!=NULL){
            if(temp1->val<temp2->val){
                ListNode* newNode=new ListNode(temp1->val);
                dummy->next=newNode;
                dummy=newNode;
                temp1=temp1->next;
            }
            else if(temp1->val>temp2->val){
                ListNode* newNode=new ListNode(temp2->val);
                dummy->next=newNode;
                dummy=newNode;
                temp2=temp2->next;
            }
            else{
                ListNode* newNode=new ListNode(temp2->val);
                dummy->next=newNode;
                dummy=newNode;
                temp2=temp2->next;
            }
        }
        while(temp1){
            ListNode* newNode=new ListNode(temp1->val);
                dummy->next=newNode;
                dummy=newNode;
                temp1=temp1->next;
        }
        while(temp2){
            ListNode* newNode=new ListNode(temp2->val);
                dummy->next=newNode;
                dummy=newNode;
                temp2=temp2->next;
        }
        return newhead->next;        
    }
};