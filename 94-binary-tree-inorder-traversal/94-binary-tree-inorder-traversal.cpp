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
        vector<int> inorder;
        if(root == NULL)
            return inorder;
        addinordertolist(root,inorder);
        
        return inorder;
    }
    void addinordertolist(TreeNode* root , vector<int> & list)
    {
        if(root == NULL)
            return ;
        addinordertolist(root->left,list);
        list.push_back(root->val);
        addinordertolist(root->right,list);
    }
};