class Solution {
public:
    ListNode* deleteDuplicates(ListNode* head) {
        ListNode* cur = head;
        ListNode dummy(0);
        dummy.next = head;
        while(cur != nullptr) {
            if(cur -> next != nullptr && cur -> val == cur -> next -> val) {
                ListNode* runner = cur;
                while(runner -> next != nullptr && runner -> val == runner -> next -> val) {
                    runner = runner -> next;
                }
                cur -> next = runner -> next;
            }
            else {
                cur = cur -> next;
            }
        }
        return head;
    }
};
