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
    ListNode* oddEvenList(ListNode* head) {
        if (head==NULL or head->next==NULL)return head;
        ListNode* odd=head;
        ListNode* even=head->next;
        ListNode* temp=even;

        while(odd->next and odd->next->next and even->next and even->next->next){
            odd->next=odd->next->next;
            odd=odd->next;
            even->next=even->next->next;
            even=even->next;
        }
        if(odd->next and odd->next->next)odd->next=odd->next->next,odd=odd->next;
        if(even->next and even->next->next)even->next=even->next->next,even=even->next;
        even->next=NULL;
        odd->next=temp;
        return head;
    }
};