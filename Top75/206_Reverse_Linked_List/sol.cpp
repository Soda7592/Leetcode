class Solution {
public:
    ListNode* reverseList(ListNode* head) {
        ListNode *cur = head, *prev = nullptr, *next;
        while(cur != nullptr) {
            next = cur -> next;
            cur -> next = prev;
            prev = cur;
            cur = next;
        }
        return prev;
    }
};
