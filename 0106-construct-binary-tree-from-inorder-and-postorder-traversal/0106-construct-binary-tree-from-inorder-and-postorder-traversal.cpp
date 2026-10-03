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
    TreeNode* solve(vector<int>& postorder, vector<int>& inorder, int ps, int pe, int is, int ie){
        if(ps>pe || is>ie) return NULL;
        TreeNode* root = new TreeNode(postorder[ps]);
        int ind = mpp[root->val];
        root->right = solve(postorder, inorder, ps+1, ps+ie-ind, ind+1, ie);
        root->left = solve(postorder, inorder, ps+ie-ind+1, pe, is, ind-1);

        return root;
    }
    TreeNode* buildTree(vector<int>& inorder, vector<int>& postorder) {
        reverse(postorder.begin(), postorder.end());
        for(int i=0; i<inorder.size(); i++){
            mpp[inorder[i]] = i;
        }
        return solve(postorder, inorder, 0, postorder.size()-1, 0, inorder.size()-1);
    }
};