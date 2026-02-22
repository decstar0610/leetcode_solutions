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
        if(!head)return head;
        ListNode*temp = head;
        int size=1;
        while(temp->next){
            size++;
            temp=temp->next;
        }
        temp=head;
        int len=size-n;
        if(len<1)return head->next; 
        if(len==1){
            temp->next=temp->next->next;
            return head;
        }
        while(len>1){
            temp=temp->next;
            len--;
        }
        temp->next=temp->next->next;
        return head;
    }
};