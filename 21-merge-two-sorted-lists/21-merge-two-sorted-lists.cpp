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
    ListNode* mergeTwoLists(ListNode* list1, ListNode* list2) {
      ListNode* SortedList = nullptr;
      ListNode* Temp = SortedList;
      while (list1 != nullptr && list2 !=nullptr)
        {
          if(list1->val <= list2->val)
          {
            if(Temp == nullptr)
            {
              Temp = new ListNode(list1->val,nullptr);
              SortedList = Temp;
            }else
            {
              Temp->next = new ListNode();
              Temp->next->val = list1->val;
              Temp = Temp->next;
            }
            list1 = list1->next;
            
          }else{
            if(Temp == nullptr)
            {
              Temp = new ListNode(list2->val,nullptr);
              SortedList = Temp;
            }
            else
            {
              Temp->next = new ListNode();
              Temp->next->val = list2->val;
              Temp = Temp->next;
            }
            list2 = list2->next;
          }
        
        }
      while(list1 != nullptr)
      {
         if(Temp == nullptr)
            {
              Temp = new ListNode(list1->val,nullptr);
              SortedList = Temp;
            }else
            {
              Temp->next = new ListNode();
              Temp->next->val = list1->val;
              Temp = Temp->next;
            }
            list1 = list1->next;
            
      }
      while(list2 != nullptr)
      {
        if(Temp == nullptr)
            {
              Temp = new ListNode(list2->val,nullptr);
              SortedList = Temp;
            }
            else
            {
              Temp->next = new ListNode();
              Temp->next->val = list2->val;
              Temp = Temp->next;
            }
            list2 = list2->next;
      }
      return SortedList;
    }
};