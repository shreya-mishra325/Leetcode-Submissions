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
    bool isPalindrome(ListNode* head) {
        ListNode* slow=head;
        ListNode* fast=head;
        while(fast!=NULL && fast->next!=NULL){
            slow=slow->next;
            fast=fast->next->next;
        }
        ListNode* middle=slow;
        ListNode* prev=NULL;
        while(slow!=NULL){
            ListNode* nextNode = slow->next;
            slow->next=prev;
            prev=slow;
            slow=nextNode;
        }
        slow=prev;
        while(slow!=NULL){
            if(slow->val!=head->val) return 0;
            slow=slow->next;
            head=head->next;
        }
        return 1;
    }
};