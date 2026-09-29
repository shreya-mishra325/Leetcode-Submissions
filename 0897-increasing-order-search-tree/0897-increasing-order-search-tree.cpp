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
    TreeNode* prev=NULL;
    TreeNode* ans=NULL;
    void inorder(TreeNode* root){
        if(root==NULL) return;
        inorder(root->left);
        if(ans==NULL) ans=root;
        if(prev!=NULL) prev->right=root;
        root->left=NULL;
        prev=root;
        inorder(root->right);
    }
    TreeNode* increasingBST(TreeNode* root) {
        inorder(root);
        return ans;
    }
};