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
    TreeNode* deletee(TreeNode* root, int key){
        if(root==NULL) return NULL;
        if(root->val==key){
            if(root->left==NULL && root->right==NULL){
                delete(root);
                return NULL;
            }
            if(root->left==NULL){
                TreeNode* temp=root->right;
                delete root;
                return temp;
            }
            if(root->right==NULL){
                TreeNode* temp=root->left;
                delete root;
                return temp;
            }
            TreeNode* temp=root->right;
            while(temp->left!=NULL){
                temp=temp->left;
            }
            root->val=temp->val;
            root->right=deletee(root->right, temp->val);
            return root;
        } 
        if(root->val>key){
            root->left= deletee(root->left, key);
        }
        else root->right= deletee(root->right, key);
        return root;
    }
    TreeNode* deleteNode(TreeNode* root, int key) {
        return deletee(root,key);
    }
};