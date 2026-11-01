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
    TreeNode* constructMaximumBinaryTree(vector<int>& nums) {
        if(nums.empty()) return NULL;
        int maxi=0;
        for(int i=0; i<nums.size(); i++){
                if(nums[i]>nums[maxi]){
                maxi = i;
            }
        }
        TreeNode* root=new TreeNode(nums[maxi]);
        vector<int> left(nums.begin(), nums.begin()+maxi);
        vector<int> right(nums.begin()+maxi+1, nums.end());
        TreeNode* rightTree=constructMaximumBinaryTree(right);
        TreeNode* leftTree=constructMaximumBinaryTree(left);
        root->left=leftTree;
        root->right=rightTree;
        return root;
    }
};