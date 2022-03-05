/*
// Definition for a Node.
class Node {
    public int val;
    public Node left;
    public Node right;
    public Node next;

    public Node() {}
    
    public Node(int _val) {
        val = _val;
    }

    public Node(int _val, Node _left, Node _right, Node _next) {
        val = _val;
        left = _left;
        right = _right;
        next = _next;
    }
};
*/

class Solution {
    public Node connect(Node root) {
         BFS(root);
      return root;
    }
  
public void BFS(Node root)
  {
    if(root ==null)
      return;
    
    Queue<Node> Tempqueue  = new LinkedList<Node>();
    Queue<Node> queue = new LinkedList<Node>();
    Tempqueue.add(root);
    Node temp;

    while(Tempqueue.isEmpty() == false)
    {
        temp = Tempqueue.poll();
        queue.add(temp);

      if(temp.left != null)
        Tempqueue.add(temp.left);
      if(temp.right != null)
        Tempqueue.add(temp.right);
    }
    temp = queue.poll();
    temp.next = null;
    int i=1;
    while(queue.size()>0) 
    {
      for(int j=0;j<=i && queue.size()>0;j++){
        temp = queue.poll();
        temp.next = (queue.size()>0)?queue.peek():null;
      }
      temp.next= null;
      i = i*2 +1;
    }
    }
}