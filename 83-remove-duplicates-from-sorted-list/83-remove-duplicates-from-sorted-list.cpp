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
    ListNode* deleteDuplicates(ListNode* head) {
        
        if(head == NULL)
            return head;
        
        map<int,bool> m;
        ListNode * tailNode = head;
        ListNode * tempNode = head;
        m[tempNode->val] = true;
        
        tempNode = tempNode->next;
        
        while(tempNode != NULL)
        {
            if(m[tempNode->val] == true) // duplicate -> needs removal
            {
                tailNode->next = tempNode->next;
            }else // new -> needs to be added to map
            {
                tailNode = tempNode;
                m[tempNode->val] = true;
            }
            tempNode = tempNode->next;
        }   
        
        return head;
    }
};