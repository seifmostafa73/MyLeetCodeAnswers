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
    public ListNode MergeTwoLists(ListNode list1, ListNode list2) {
        ListNode SortedList = null;
        ListNode Temp = SortedList;
        while (list1 != null && list2 !=null)
        {
          if(list1.val <= list2.val)
          {
            if(Temp == null)
            {
              Temp = new ListNode(list1.val,null);
              SortedList = Temp;
            }else
            {
              Temp.next = new ListNode();
              Temp.next.val = list1.val;
              Temp = Temp.next;
            }
            list1 = list1.next;
            
          }else{
            if(Temp == null)
            {
              Temp = new ListNode(list2.val,null);
              SortedList = Temp;
            }
            else
            {
              Temp.next = new ListNode();
              Temp.next.val = list2.val;
              Temp = Temp.next;
            }
            list2 = list2.next;
          }
        
        }
      while(list1 != null)
      {
         if(Temp == null)
            {
              Temp = new ListNode(list1.val,null);
              SortedList = Temp;
            }else
            {
              Temp.next = new ListNode();
              Temp.next.val = list1.val;
              Temp = Temp.next;
            }
            list1 = list1.next;
            
      }
      while(list2 != null)
      {
        if(Temp == null)
            {
              Temp = new ListNode(list2.val,null);
              SortedList = Temp;
            }
            else
            {
              Temp.next = new ListNode();
              Temp.next.val = list2.val;
              Temp = Temp.next;
            }
            list2 = list2.next;
      }
      return SortedList;
    }
}