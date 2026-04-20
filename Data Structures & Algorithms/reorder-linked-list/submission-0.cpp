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
    void reorderList(ListNode* head)
    {
        if(head==NULL or head->next == NULL)
        {
            return;
        }
        ListNode* slow = head;
        ListNode* fast = head;
        // finding the middle of the linked list
        while(fast!=NULL and fast->next!=NULL)
        {
            slow= slow->next;
            fast= fast->next->next;
        }
        // reversing the 2nd half
        ListNode* second = slow->next;
        slow->next = NULL;
        ListNode* prev = NULL;
        while(second!=NULL)
        {
            ListNode* nextNode = second->next;
            second->next = prev;
            prev = second;
            second = nextNode;
        }
        // merge 2 halves

        ListNode* first = head;
        second = prev;
        while(second!=NULL)
        {
             ListNode* temp1 = first->next;
            ListNode* temp2 = second->next;

            first->next = second;
            second->next = temp1;

            first = temp1;
            second = temp2;
        }

        


        
    }
};
