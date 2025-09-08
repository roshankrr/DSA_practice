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
    ListNode* addTwoNumbers(ListNode* l1, ListNode* l2) {
        if(l1==NULL)return l2;
        if(l2==NULL)return l1;
        ListNode* curr1=l1;
        ListNode* curr2=l2;
        ListNode* main=new ListNode();
        ListNode* ptr=main;
        int rem=0;
        while(curr1 and curr2){
            int sum=curr1->val+curr2->val+rem;
            curr1=curr1->next;
            curr2=curr2->next;
            rem=0;
            if(sum>9)rem++;
            ListNode* temp=new ListNode(sum%10);
            main->next=temp;
            main=main->next;
        }

        while(curr1){
            int sum=curr1->val+rem;
            curr1=curr1->next;
            rem=0;
            if(sum>9)rem++;
            ListNode* temp=new ListNode(sum%10);
            main->next=temp;
            main=main->next;
        }
        while(curr2){
            int sum=curr2->val+rem;
            curr2=curr2->next;
            rem=0;
            if(sum>9)rem++;
            ListNode* temp=new ListNode(sum%10);
            main->next=temp;
            main=main->next;
        }
        if(rem){
            ListNode* temp=new ListNode(rem);
            main->next=temp;
        }


    return ptr->next;
    }
};