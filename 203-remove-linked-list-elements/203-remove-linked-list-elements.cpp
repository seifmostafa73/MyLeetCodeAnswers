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
    ListNode* removeElements(ListNode* head, int val) {
        if(head == NULL)
            return head;
        
        while(head->val == val){
            head = head->next;
            
             if(head == NULL)
                return head;
        }
        
        ListNode * prv = head;
        ListNode * nxt = head->next;

        while(prv != NULL && nxt != NULL)
        {   
            if(nxt->val == val)
            {
                while( nxt != NULL && nxt->val == val)
                {
                    prv->next = nxt->next;
                    nxt = nxt->next;
                }
            }
            
            prv = prv->next;
            if(prv == NULL)
                return head;
            
            nxt = prv->next;
        }
        return head;
    }
};