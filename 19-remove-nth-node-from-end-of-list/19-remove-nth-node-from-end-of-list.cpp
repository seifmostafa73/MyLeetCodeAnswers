/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     ListNode *next;
 *     ListNode() : val(0), next(nullptr) {}
 *     ListNode(int x) : val(x), next(nullptr) {}
 *     ListNode(int x, ListNode *next) : val(x), next(next) {}
 * };
 */
class Solution {
public:
    ListNode* removeNthFromEnd(ListNode* head, int n) {
        ListNode* Target = head;
        int Size = 1;
        while(Target->next != nullptr)
        {
          Target = Target->next;
          Size++;
        }
      //now if your have one node and trying to remove any node (which is oney this node) then you need to return an empty list
      if(Size ==1)
        return nullptr;
      
//else , if you are trying to remove nth node then nth->previous->next = nth->next since this is a single linked we need to go lie (n-1)th->next = nth->next;
      Size -= n;
      
      if(Size == 0){return head->next;}
      
      Target = head;
      
      while(Size >1)
      {
        Target = Target->next;
        Size --;
      }
      
      if(Target->next != nullptr)
      {
        Target->next = Target->next->next;
      } 
      
      return head;
    }
};