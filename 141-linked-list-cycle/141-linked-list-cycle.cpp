/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     ListNode *next;
 *     ListNode(int x) : val(x), next(NULL) {}
 * };
 */
class Solution {
public:
    bool hasCycle(ListNode *head) {
        if (head == NULL)
            return false;
            
        ListNode * slowNode = head;
        ListNode * fastNode = head;
        while(slowNode->next != NULL && fastNode->next !=NULL)
        {
            if(fastNode->next->next == NULL)
                return false;
            
            slowNode = slowNode->next;
            fastNode = fastNode->next->next;
            
           if(slowNode == fastNode)
               return true;
            
        }
        return false;
    }
};