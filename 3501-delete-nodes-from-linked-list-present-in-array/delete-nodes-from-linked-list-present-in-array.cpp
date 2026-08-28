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
    ListNode* modifiedList(vector<int>& nums, ListNode* head) {
        unordered_set<int> st;

        for(int i=0;i<nums.size();i++){
            st.insert(nums[i]);
        }

        ListNode* back = new ListNode(-1);
        ListNode* newHead=back;
        ListNode* temp=head;
        back->next=head;
        while(temp!=NULL){
            if(st.find(temp->val)!=st.end()){
                temp=temp->next;
            }
            else{
                back=temp;
                temp=temp->next;
            }
            back->next=temp;
        }
        return newHead->next;
    }
};