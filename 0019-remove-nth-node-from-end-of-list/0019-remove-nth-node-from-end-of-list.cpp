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
    ListNode* removeNthFromEnd(ListNode* head, int n) {
        if (head == NULL || head->next == NULL) {
            return NULL;
        }
        ListNode* curr = head;
        ListNode* pointer = head;
        ListNode* nextVal;
        int count=0;
        while(curr!=NULL){
            curr=curr->next;
            count++;
        }
        if (count == n) {
            return head->next;
        }
        count=count-n;
        for(int i=0; i<count-1; i++){
            pointer=pointer->next;
        }
        pointer->next=pointer->next->next;
        return head;
    }
};