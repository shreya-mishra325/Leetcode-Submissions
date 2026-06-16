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
    ListNode *detectCycle(ListNode *head) {
        long long pos=-1;
        ListNode* curr=head;
        map<ListNode*, int> mpp;
        while(curr!=NULL){
            mpp[curr]++;
            if(mpp[curr]>1) return curr;
            curr=curr->next;
        }
        return NULL;  
    }
};