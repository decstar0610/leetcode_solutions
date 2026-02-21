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
    bool isPalindrome(ListNode* head) {
        vector<int>arr;
        while(head!=nullptr){
            int x=head->val;
            arr.push_back(x);
            head=head->next;
        }
        int left=0, right=arr.size()-1;
        while(left<right){
            if(arr[left]!=arr[right])return 0;
            left++;
            right--;

        }
        return true;
    }
};