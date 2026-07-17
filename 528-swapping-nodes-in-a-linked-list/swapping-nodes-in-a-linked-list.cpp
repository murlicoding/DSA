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
    ListNode* swapNodes(ListNode* head, int k) {
        ListNode* temp=head;
        int t=0;
        while(temp!=NULL){
          t++;
          temp=temp->next;
        } 
        int m=t-k+1;
        ListNode* node=head;
        temp=head;
        while(k-1>0){
           temp=temp->next;
           k--;
        }
        while(m-1>0){
          node=node->next;m--;
        }
        swap(temp->val,node->val);
        return head;
    }
};