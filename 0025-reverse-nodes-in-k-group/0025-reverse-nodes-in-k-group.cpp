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

    ListNode* Reverse(ListNode* head,int k){
        if(head==NULL || head->next==NULL)return head;
        ListNode* curr=head;
        ListNode* prev=NULL;
        while(k && curr){
            ListNode* Next=curr->next;
            curr->next=prev;
            prev=curr;
            curr=Next;
            k--;
        }
        head->next=curr;
        return prev;
    }

    ListNode* reverseKGroup(ListNode* head, int k) {
        if(head==NULL || head->next==NULL)return head;
        ListNode* curr=head;
        ListNode* prev=new ListNode(-1);
        int cn=0;
        prev->next=curr;
        ListNode* ans=prev;
        int count=0;
        while(curr){
            count++;
            curr=curr->next;
        }
        count=count-count%k;
        cout<<count;
        while(prev->next && count){
            if(cn<=0){
                prev->next=Reverse(prev->next,k);
                cn=k;
            }
            prev=prev->next;
            cn--;
            count--;
        }
        // prev->next=Reverse(prev->next,k);
        return ans->next;
    }
};