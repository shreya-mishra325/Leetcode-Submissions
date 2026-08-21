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
    vector<vector<int>> ans;
    vector<int> path;
    void check(TreeNode* root, int targetSum) {
        if(root==NULL) return;
        path.push_back(root->val);
        targetSum=targetSum-root->val;
        if(root->left==NULL && root->right==NULL){
            if(targetSum==0){
                ans.push_back(path);
            }
        }
        check(root->left, targetSum);
        check(root->right, targetSum);
        path.pop_back();
    }
    vector<vector<int>> pathSum(TreeNode* root, int targetSum) {
        check(root, targetSum);
        return ans;
    }
};