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
        ListNode*temp= head;
         ListNode*dummy= new ListNode(-1);
         ListNode*ptr= dummy;
         while( temp!=nullptr){
            if(temp->next && temp->val==temp->next->val){
                int dupval=temp->val;
            while(temp && temp->val==dupval){
                  temp=temp->next;
               }
            }
            else{
            ptr->next=new ListNode(temp->val);
            temp=temp->next;
            ptr=ptr->next;
            }
         }
       return dummy->next;

    }
};