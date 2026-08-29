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
    int length(ListNode* head){
        int cnt=0;
        ListNode* temp=head;
        while(temp!=NULL){
            cnt++;
            temp=temp->next;
        }
        return cnt;
    }
    vector<int> nodesBetweenCriticalPoints(ListNode* head) {
        if(length(head) < 3) return {-1,-1};
        ListNode* prev=head;
        ListNode* curr=prev->next;
        ListNode* nextnode=curr->next;
        vector<int> v;
        int cnt=2;
        while(nextnode!=NULL){
            if(curr->val> prev->val && curr->val> nextnode->val){
                v.push_back(cnt);
            }
            if(curr->val < prev->val && curr->val < nextnode->val){
                v.push_back(cnt);
            }
            cnt++;
            prev=prev->next;
            curr=curr->next;
            nextnode=nextnode->next;
        }
        if(v.size() < 2) return {-1, -1};
        int minDiff = INT_MAX;

        for(int i = 1; i < v.size(); i++) {
            minDiff = min(minDiff, v[i] - v[i-1]);
        }
        int maxDiff = v.back() - v.front();

        return {minDiff,maxDiff};
    }
};