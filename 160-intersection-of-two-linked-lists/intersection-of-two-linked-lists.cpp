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
    ListNode *getIntersectionNode(ListNode *headA, ListNode *headB) {
        ListNode* temp=headA;
                ListNode* tempp=headB;
                while(temp!=tempp){
                    if(temp==NULL)temp=headB;
                    else
                    temp=temp->next;
                     if(tempp==NULL)tempp=headA;
                    else
                    tempp=tempp->next;
                }
                
                return temp;

    }
};