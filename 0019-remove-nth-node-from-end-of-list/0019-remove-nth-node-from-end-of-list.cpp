class Solution {
public:
    ListNode* removeNthFromEnd(ListNode* head, int n) {
        ListNode* curr = head;
        ListNode* temp = head;

        for (int x = 0; x < n; x++) {
            temp = temp->next;
        }
        if (temp == NULL)
            return head->next;
            
        while (temp->next) {
            curr = curr->next;
            temp = temp->next;
        }
        curr->next = curr->next->next;
        return head;
    }
};
