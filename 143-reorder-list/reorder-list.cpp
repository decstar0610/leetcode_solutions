class Solution {
public:
    void reorderList(ListNode* head) {
        // 1. Find middle
        ListNode* slow = head;
        ListNode* fast = head->next;
        while (fast != nullptr && fast->next != nullptr) {
            slow = slow->next;
            fast = fast->next->next;
        }

        // 2. Reverse second half
        ListNode* current = slow->next;
        ListNode* prev = nullptr;
        slow->next = nullptr;

        while (current != nullptr) {
            ListNode* tmp = current->next;
            current->next = prev;
            prev = current;
            current = tmp;
        }

        // 3. Reorder / merge
        ListNode* first = head;
        current = prev;

        while (current != nullptr) {
            ListNode* tmp1 = first->next;
            ListNode* tmp2 = current->next;

            first->next = current;
            current->next = tmp1;

            first = tmp1;
            current = tmp2;
        }
    }
};
