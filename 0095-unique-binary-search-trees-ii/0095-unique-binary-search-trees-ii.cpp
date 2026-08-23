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
    vector<TreeNode*> generate(int start, int end){
        vector<TreeNode*> ans;
        if(start>end) {
            ans.push_back(NULL);
            return ans;
        }
        for(int i=start; i<=end; i++){
            vector<TreeNode*> leftTrees=generate(start, i-1);
            vector<TreeNode*> rightTrees=generate(i+1, end);

            for(auto left:leftTrees){
                for(auto right:rightTrees){
                    TreeNode* root=new TreeNode(i);
                    root->left=left;
                    root->right=right;
                    ans.push_back(root);
                }
            }
        }
        return ans;

    }
    vector<TreeNode*> generateTrees(int n) {
        if(n==0) return {};
        return generate(1,n);
    }
};