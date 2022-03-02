/**
 * Definition for singly-linked list.
 * public class ListNode {
 *     int val;
 *     ListNode next;
 *     ListNode() {}
 *     ListNode(int val) { this.val = val; }
 *     ListNode(int val, ListNode next) { this.val = val; this.next = next; }
 * }
 */
class Solution {
    public ListNode middleNode(ListNode head) {
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