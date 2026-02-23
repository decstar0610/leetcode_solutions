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
        ListNode*temp= head;
        ListNode*ptr= head;
        int size=0,length;
        while(temp){
          size++;
          temp=temp->next;
        }
        //goal is to find the size of linked list so its easier to find the nodes and its prev nodes to swap
        temp=head;
        length=size-k;

        if(k == 1)
            temp = NULL;
            // no previous node means take tep as null so wwe know we have only one node
        else{                 
           while(k > 2){
           temp = temp->next;
           k--;
          }
        }   

        if(length == 0)
           ptr = NULL;  
           //similarly if length is 1 ... then swapping involves head only
         else{
            while(length > 1){
            ptr = ptr->next;
             length--;
            }
          }
          //temp is prev node from the start and ptr is also prev node from the end.. ie the nodes which has to be swapped
         ListNode* node1;
         ListNode* node2;
         if(temp==nullptr)node1=head;
         else node1=temp->next;

         if(ptr==nullptr)node2=head;
         else node2 = ptr->next;

        if(node1==node2)return head;


         if(temp)temp->next=node2;
         else head=node2;
         if(ptr)ptr->next=node1;
         else head=node1;
       
         ListNode*x;
         x=node1->next;
         node1->next=node2->next;
         node2->next=x;

         return head;
        



    }
};