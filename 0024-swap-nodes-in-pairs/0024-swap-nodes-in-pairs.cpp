class Solution {
public:
    ListNode* swapPairs(ListNode* head) {
        if(head == NULL || head->next == NULL)
            return head;
        ListNode* newHead = head->next;
        ListNode* prev = NULL;
        ListNode* curr = head;

        while(curr != NULL && curr->next != NULL) {
            ListNode* nextPair = curr->next->next;
            ListNode* second = curr->next;
            second->next = curr;
            curr->next = nextPair;
            if(prev != NULL)
                prev->next = second;
            prev = curr;
            curr = nextPair;
        }
        return newHead;
    }
};