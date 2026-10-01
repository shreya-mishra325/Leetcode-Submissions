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
    unordered_map<int,int> mpp;
    TreeNode* solve(vector<int>& preorder, vector<int>& inorder, int ps, int pe, int is, int ie){
        if(ps>pe || is>ie) return NULL;
        TreeNode* root = new TreeNode(preorder[ps]);
        int ind = mpp[root->val];
        root->left = solve(preorder, inorder, ps+1, ps+ind-is, is, ind-1);
        root->right = solve(preorder, inorder, ps+ind-is+1, pe, ind+1, ie);

        return root;
    }
    TreeNode* buildTree(vector<int>& preorder, vector<int>& inorder) {
        for(int i=0; i<inorder.size(); i++){
            mpp[inorder[i]] = i;
        }
        return solve(preorder, inorder, 0, preorder.size()-1, 0, inorder.size()-1);
    }
};