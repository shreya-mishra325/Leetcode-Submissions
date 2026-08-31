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
    void solve(TreeNode* root, string path, vector<string>& v){
        if(root==NULL) return;
        path=path+to_string(root->val);
        if(root->left==NULL && root->right==NULL){
            v.push_back(path);
            return;
        }
        path=path+"->";
        solve(root->left, path, v);
        solve(root->right, path, v);
    }
    vector<string> binaryTreePaths(TreeNode* root) {
        vector<string> v;
        solve(root, "", v);
        return v;
    }
};