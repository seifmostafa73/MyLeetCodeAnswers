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
    public ListNode removeNthFromEnd(ListNode head, int n) {
        ListNode Target = head;
        int Size = 1;
        while(Target.next != null)
        {
          Target = Target.next;
          Size++;
        }
      //now if your have one node and trying to remove any node (which is oney this node) then you need to return an empty list
      if(Size ==1)
        return null;
      
//else , if you are trying to remove nth node then nth->previous->next = nth->next since this is a single linked we need to go lie (n-1)th->next = nth->next;
      Size -= n;
      
      if(Size == 0){return head.next;}
      
      Target = head;
      
      while(Size >1)
      {
        Target = Target.next;
        Size --;
      }
      
      if(Target.next != null)
      {
        Target.next = Target.next.next;
      } 
      
      return head;  
    }
}