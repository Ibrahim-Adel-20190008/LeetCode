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
    static TreeNode* bulidTree(TreeNode* result , TreeNode* root1, TreeNode* root2)
    {
     if(!root1 && !root2) return nullptr;
    else if(!root1) 
    {    
        result = new TreeNode(root2->val);
        result->left = bulidTree(result->left,root1,root2->left);
        result->right = bulidTree(result->right,root1,root2->right);
    }
    else if(!root2) 
    {
        result = new TreeNode(root1->val);
        result->left = bulidTree(result->left,root1->left,root2);
        result->right = bulidTree(result->right,root1->right,root2);
    }
    else
    {
        result = new TreeNode(root1->val+root2->val);
        result->left = bulidTree(result->left,root1->left,root2->left);
        result->right = bulidTree(result->right,root1->right,root2->right);
    }
        return result;
    }
    
    TreeNode* mergeTrees(TreeNode* root1, TreeNode* root2) {
        return bulidTree(new TreeNode(),root1,root2);
    }
};