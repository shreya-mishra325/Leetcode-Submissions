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
    ListNode* mergeTwoLists(ListNode* list1, ListNode* list2) {
        if(list1==NULL && list2==NULL) return NULL;
        if(list1==NULL) return list2;
        if(list2==NULL) return list1;
        ListNode* h1=list1;
        ListNode* h2=list2;
        vector<int> vec;
        while(h1!=NULL){
            vec.push_back(h1->val);
            h1=h1->next;
        }
        while(h2!=NULL){
            vec.push_back(h2->val);
            h2=h2->next;
        }
        sort(vec.begin(), vec.end());
        ListNode* h3= new ListNode(vec[0]);
        ListNode* prev=h3;
        for(int i=1; i<vec.size(); i++){
            ListNode* naya = new ListNode(vec[i]);
            prev->next=naya;
            prev=naya;
        }
        return h3;
    }
};