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
    vector<int> inorderTraversal(TreeNode* root) {
        vector<int> result;
        if(root) solve(root,result);
        return result;
    }
    void solve(TreeNode* root,vector<int> &result){
        if(!root->left && !root->right){
            result.push_back(root->val);
            return;
        }
        if(root->left) solve(root->left,result);
        result.push_back(root->val);
        if(root->right) solve(root->right,result);
    }
};