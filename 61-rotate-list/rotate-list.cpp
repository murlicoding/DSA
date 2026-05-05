
class Solution {
public:
    ListNode* rotateRight(ListNode* head, int k) {
        if(!head || ! head->next || k==0) return head;
    
    ListNode* temp = head;
int l=1;
    while (temp->next != NULL) {
        temp = temp->next;
        l++;
    }
    temp->next=head;

        k=k%l;
        int s=l-k;
        ListNode* newTail=head;
        for(int i=1;i<s;i++){
            newTail=newTail->next;
        }
        ListNode* newHead = newTail->next;
        newTail->next = NULL;
        return newHead;
    }
};