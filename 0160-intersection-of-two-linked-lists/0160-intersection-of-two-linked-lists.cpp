/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     ListNode *next;
 *     ListNode(int x) : val(x), next(NULL) {}
 * };
 */
class Solution {
public:
    ListNode *getIntersectionNode(ListNode *headA, ListNode *headB) {
        if(headA==NULL || headB==NULL) return NULL;
        vector<ListNode*> vec;
        while(headA!=NULL){
            vec.push_back(headA);
            headA=headA->next;
        }
        while(headB!=NULL){
            if(find(vec.begin(), vec.end(),headB)!=vec.end()) return headB;
            headB=headB->next;
        }
        return NULL;
    }
};