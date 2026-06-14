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
    bool hasCycle(ListNode *head) {
        ListNode* curr=head;
        map<ListNode*,int> mpp;
        while(curr!=NULL){
           if(mpp.find(curr)!=mpp.end()) return 1;
           mpp[curr]=1;
           curr=curr->next;
        }
        return 0;
    }
};