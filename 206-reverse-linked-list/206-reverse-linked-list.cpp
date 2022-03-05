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
    ListNode* reverseList(ListNode* head) {
      if(head == nullptr) return nullptr;
      stack<int>* myStack = new stack<int>();
      while(head != nullptr)
        {
          myStack->push(head->val);
          head = head->next;
        }
      head = new ListNode(myStack->top());
      myStack->pop();
      ListNode* Temp = head;
      while(myStack->size() >0)
      {
        Temp->next = new ListNode(myStack->top());
        myStack->pop();
        Temp =  Temp->next;
      }
      return head;
    }
};