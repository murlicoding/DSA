/**
 * Definition for singly-linked list.
 * public class ListNode {
 *     int val;
 *     ListNode next;
 *     ListNode() {}
 *     ListNode(int val) { this.val = val; }
 *     ListNode(int val, ListNode next) { this.val = val; this.next = next; }
 * }
 */
class Solution {
    public ListNode deleteMiddle(ListNode head) {
        if (head == null || head.next == null) {
            return null;
        }
int i=0;
        ListNode temp=head;
        while(temp!=null){
            temp=temp.next;
            i++;
        }
       int mid=i/2;
       temp=head;
        for(int j=0;j<mid-1;j++){
            temp=temp.next;
        }
        temp.next=temp.next.next;
        return head;
    }
}