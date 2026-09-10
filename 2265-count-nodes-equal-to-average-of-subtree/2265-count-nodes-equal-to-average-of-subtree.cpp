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
    int count=0;
    int sum=0, ans=0;
    int Inorder(TreeNode* root){
        if(root==NULL) return NULL;
        count++;
        int left=Inorder(root->left);
        int middle=root->val;
        int right=Inorder(root->right);
        sum=left+middle+right;
        return sum;
    }
    void Inord(TreeNode* root){
        if(root==NULL) return;
        count=0;
        sum=Inorder(root); 
        int avg=sum/count;
        if(root->val==avg) ans++;
        Inord(root->left);
        Inord(root->right);
    }
    int averageOfSubtree(TreeNode* root) {
        Inord(root);
        return ans;
    }
};