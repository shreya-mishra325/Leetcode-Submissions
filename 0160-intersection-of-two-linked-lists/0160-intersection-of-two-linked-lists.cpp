class Solution {
public:
    ListNode *getIntersectionNode(ListNode *headA, ListNode *headB) {
        ListNode* currA = headA;
        while(currA) {
            ListNode* currB = headB;
            while(currB) {
                if(currA == currB) {
                    return currA;
                }
                currB = currB->next;
            }
            currA = currA->next;
        }
        return nullptr;
    }
};