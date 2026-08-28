/**
 * Definition for a binary tree node.
 * struct TreeNode {
 *     int val;
 *     TreeNode *left;
 *     TreeNode *right;
 *     TreeNode() : val(0), left(nullptr), right(nullptr) {}
 *     TreeNode(int x) : val(x), left(nullptr), right(nullptr) {}
 *     TreeNode(int x, TreeNode *left, TreeNode *right) : val(x), left(left), right(right) {}
 * };
 */
class Solution {
public:
    int temp=0;
    int sumNumbers(TreeNode* root) {
        if(root==NULL) return 0;
        if(root->left==NULL && root->right==NULL){
            return root->val;
        }
        if(root->left!=NULL){
            root->left->val=root->val*10+root->left->val;
        }
        if(root->right!=NULL){
            root->right->val=root->val*10+root->right->val;
        }
        temp=temp+root->val;
        int left=sumNumbers(root->left);
        int right=sumNumbers(root->right);
        return left+right;
    }
};