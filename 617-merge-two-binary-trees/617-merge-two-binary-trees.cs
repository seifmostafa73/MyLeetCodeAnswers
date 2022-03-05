/**
 * Definition for a binary tree node.
 * public class TreeNode {
 *     public int val;
 *     public TreeNode left;
 *     public TreeNode right;
 *     public TreeNode(int val=0, TreeNode left=null, TreeNode right=null) {
 *         this.val = val;
 *         this.left = left;
 *         this.right = right;
 *     }
 * }
 */
public class Solution {
    public TreeNode MergeTrees(TreeNode root1, TreeNode root2) {
        TreeNode resultRoot = new TreeNode();
      resultRoot = RecMerge(root1,root2);
      return resultRoot;
    }
  TreeNode RecMerge(TreeNode FirstRoot,TreeNode SecondRoot)
  {
    if(FirstRoot == null && SecondRoot == null) return null;
    if(FirstRoot ==null) return SecondRoot;
    if(SecondRoot == null) return FirstRoot;
    TreeNode TempNode = new TreeNode();
    
    if(FirstRoot!=null) 
      TempNode.val += FirstRoot.val;
    if(SecondRoot!=null)
      TempNode.val += SecondRoot.val;
        
   // Console.WriteLine(TempNode.val);
    if(FirstRoot.left !=null && SecondRoot.left!=null){
      TempNode.left = RecMerge(FirstRoot.left,SecondRoot.left);
    }
    else if(FirstRoot.left == null)
    {
      TempNode.left = SecondRoot.left;
    }else
    {
      TempNode.left = FirstRoot.left;
    }
      
    if(FirstRoot.right !=null && SecondRoot.right!=null){
      TempNode.right = RecMerge(FirstRoot.right,SecondRoot.right);
    }
    else if(FirstRoot.right == null)
    {
      TempNode.right = SecondRoot.right;
    }else 
    {
      TempNode.right = FirstRoot.right;
    }
    return TempNode;
  }
}