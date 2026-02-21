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
    ListNode* rotateRight(ListNode* head, int k) {
        if(!head || !head->next || k==0)
              return head;

        ListNode*temp=head;
        ListNode*ptr=head;
        int size=1;
        int len;
        while(temp->next!=nullptr){
            size++;
            temp=temp->next;
        }
        temp->next=head;
        k=k%size;
        len=size-k;
        while(len>1){
            ptr=ptr->next;
            len--;
        }
        head=ptr->next;
        ptr->next=nullptr;
        return head;

    }
};


/*
class Solution {
public:
    ListNode* rotateRight(ListNode* head, int k) {

        if(!head || !head->next || k==0)
            return head;

        ListNode* temp = head;
        int size = 1;

        // find length + last node
        while(temp->next != nullptr){
            temp = temp->next;
            size++;
        }

        // make circular
        temp->next = head;

        k = k % size;
        int len = size - k;

        ListNode* ptr = head;

        // move to new tail
        while(len > 1){
            ptr = ptr->next;
            len--;
        }

        head = ptr->next;
        ptr->next = nullptr;

        return head;
    }
};
*/