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
        ListNode *temp=head;
        
        int c=0;
        while(temp){
            c++;
            temp=temp->next;
        }
        if (n == c)
    return head->next;
        temp=head;
        int s=c-n;
        while(s>1){
            temp=temp->next;
            s--;
        }
        temp->next=temp->next->next;
        return head;
    }
};