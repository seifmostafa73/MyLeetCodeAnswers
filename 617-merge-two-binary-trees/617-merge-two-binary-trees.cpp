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
    TreeNode* mergeTrees(TreeNode* root1, TreeNode* root2) {
         TreeNode* resultRoot = new TreeNode();
      resultRoot = RecMerge(root1,root2);
      return resultRoot;
    }
  TreeNode* RecMerge(TreeNode* FirstRoot,TreeNode* SecondRoot)
  {
    if(FirstRoot == nullptr && SecondRoot == nullptr) return nullptr;
    if(FirstRoot ==nullptr) return SecondRoot;
    if(SecondRoot == nullptr) return FirstRoot;
    TreeNode* TempNode = new TreeNode();
    
    if(FirstRoot!=nullptr) 
      TempNode->val += FirstRoot->val;
    if(SecondRoot!=nullptr)
      TempNode->val += SecondRoot->val;
        
    if(FirstRoot->left !=nullptr && SecondRoot->left!=nullptr){
      TempNode->left = RecMerge(FirstRoot->left,SecondRoot->left);
    }
    else if(FirstRoot->left == nullptr)
    {
      TempNode->left = SecondRoot->left;
    }else
    {
      TempNode->left = FirstRoot->left;
    }
      
    if(FirstRoot->right !=nullptr && SecondRoot->right!=nullptr){
      TempNode->right = RecMerge(FirstRoot->right,SecondRoot->right);
    }
    else if(FirstRoot->right == nullptr)
    {
      TempNode->right = SecondRoot->right;
    }else 
    {
      TempNode->right = FirstRoot->right;
    }
    return TempNode;
  }
};