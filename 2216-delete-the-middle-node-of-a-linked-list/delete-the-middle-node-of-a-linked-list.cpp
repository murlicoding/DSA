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
    ListNode* deleteMiddle(ListNode* head) {
        
        ListNode *temp=head;
        if(head==NULL || head->next==NULL) return NULL;
        int i=0;
        while(temp){
         temp=temp->next;
         i++;
        }
        int mid=i/2;
        temp=head;
        for(int j=0;j<mid-1;j++){
            temp=temp->next;
        }
        temp->next=temp->next->next;
        return head;
    }
};