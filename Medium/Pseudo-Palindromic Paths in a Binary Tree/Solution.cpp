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
    static void solve(TreeNode* root,int &result,int mask){
        int bit = 1<< (root->val -1);
        mask^=bit; // if bit 0 will be 1 and vice versa
        
        if(!root->left && !root->right){
            if(!(mask&(mask-1))) result++; // check if the mask has only 1 or zero
        }
        if(root->left) solve(root->left,result,mask);
        if(root->right) solve(root->right,result,mask);
    }
    
    int pseudoPalindromicPaths (TreeNode* root) {
        int result=0;
        solve(root,result,0);
        return result;
    }
};