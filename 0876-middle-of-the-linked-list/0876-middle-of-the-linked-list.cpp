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
    ListNode* middleNode(ListNode* head) {
        ListNode* nextVal = head;
        int count=0;
        while(nextVal!=NULL){
            nextVal=nextVal->next;
            count++;
        }
        count=count/2+1;
        for(int i=0; i<count-1; i++){
            head=head->next;
        }
        return head;
    }
};