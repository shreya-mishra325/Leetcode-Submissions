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
    ListNode* sortList(ListNode* head) {
        if(head == NULL) return NULL;
        ListNode* curr=head;
        vector<int> vec;
        while(curr!=NULL){
            vec.push_back(curr->val);
            curr=curr->next;
        }
        sort(vec.begin(), vec.end());
        ListNode* head2 = new ListNode(*vec.begin());
        ListNode* a = head2;
        for(int i=1; i<vec.size(); i++){
            a->next=new ListNode(vec[i]);
            a=a->next;
        }
        return head2;
    }
};