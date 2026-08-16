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
    TreeNode* insert(TreeNode* root, TreeNode* value){
        if(root==NULL) return value;
        if(value->val>root->val){
            root->right=insert(root->right, value);
        }
        else root->left=insert(root->left, value);
        return root;
    }
    TreeNode* insertIntoBST(TreeNode* root, int val) {
        TreeNode* value=new TreeNode(val);
        if(root==NULL) return value;
        insert(root, value);
        return root;
    }
};