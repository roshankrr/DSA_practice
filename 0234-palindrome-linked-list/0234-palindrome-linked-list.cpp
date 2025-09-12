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

    ListNode* reverse(ListNode* head){
        if(head==NULL or head->next==NULL)return head;
        ListNode* curr=head;
        ListNode* prev=NULL;
        while(curr){
            ListNode* fr=curr->next;
            curr->next=prev;
            prev=curr;
            curr=fr;
        }
        return prev;
    }



public:
    bool isPalindrome(ListNode* head) {
        if(head==NULL or head->next==NULL)return 1;
        ListNode* curr=head;
        ListNode* slow=head;
        ListNode* fast=head;
        while(fast and fast->next){
            curr=curr->next;
            fast=fast->next->next;
        }
        ListNode* revhead=reverse(curr);
        ListNode* oldhead=head;
        while(oldhead and revhead){
            if(oldhead->val!=revhead->val)return 0;
            oldhead=oldhead->next;
            revhead=revhead->next;
        }
        return 1;
    }
};