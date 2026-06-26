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
    string addStrings(string a, string b) {
        string ans = "";
        int i = a.size() - 1;
        int j = b.size() - 1;
        int carry = 0;

        while (i >= 0 || j >= 0 || carry) {
            int sum = carry;

            if (i >= 0)
                sum += a[i--] - '0';

            if (j >= 0)
                sum += b[j--] - '0';

            ans.push_back((sum % 10) + '0');
            carry = sum / 10;
        }

        reverse(ans.begin(), ans.end());
        return ans;
    }

    ListNode* addTwoNumbers(ListNode* l1, ListNode* l2) {

        string num1 = "", num2 = "";

        while (l1) {
            num1.push_back(l1->val + '0');
            l1 = l1->next;
        }

        while (l2) {
            num2.push_back(l2->val + '0');
            l2 = l2->next;
        }

        reverse(num1.begin(), num1.end());
        reverse(num2.begin(), num2.end());

        string sum = addStrings(num1, num2);

        ListNode* dummy = new ListNode(0);
        ListNode* curr = dummy;

        for (int i = sum.size() - 1; i >= 0; i--) {
            curr->next = new ListNode(sum[i] - '0');
            curr = curr->next;
        }
        return dummy->next;
    }
};