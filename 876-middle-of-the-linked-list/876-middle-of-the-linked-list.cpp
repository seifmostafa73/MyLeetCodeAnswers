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
    ListNode* middleNode(ListNode* head) {
        //int Size = 0;
        ListNode* FastNode = head;
        ListNode* SlowNode = head;
      while(FastNode != nullptr && FastNode->next != nullptr)
      {
        FastNode = FastNode->next->next;
        SlowNode = SlowNode->next;
      }
      
      return SlowNode;
      
    }
};