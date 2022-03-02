/**
 * Definition for singly-linked list.
 * public class ListNode {
 *     public int val;
 *     public ListNode next;
 *     public ListNode(int val=0, ListNode next=null) {
 *         this.val = val;
 *         this.next = next;
 *     }
 * }
 */
public class Solution {
    public ListNode MiddleNode(ListNode head) {
          ListNode FastNode = head;
        ListNode SlowNode = head;
      while(FastNode != null && FastNode.next != null)
      {
        FastNode = FastNode.next.next;
        SlowNode = SlowNode.next;
      }
      
      return SlowNode;
      
    }  
}