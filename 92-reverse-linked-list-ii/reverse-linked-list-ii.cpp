class Solution {
public:
    ListNode* reverseBetween(ListNode* head, int left, int right) {

        if(!head || head->next == nullptr)
            return head;

        ListNode* dummy = new ListNode(-1);
        dummy->next = head;          //  connect dummy

        ListNode* prev = dummy;      //  start from dummy

        // move prev before left
        for(int i = 1; i < left; i++){
            prev = prev->next;
        }

        ListNode* curr = prev->next;

        // head insertion reversal
        for(int i = 0; i < right-left; i++){

            ListNode* Next = curr->next;

            curr->next = Next->next; //  detach Next
            Next->next = prev->next;
            prev->next = Next;
        }

        return dummy->next;          //  correct return
    }
};