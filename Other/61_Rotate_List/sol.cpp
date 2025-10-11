class Solution {
public:
    ListNode* rotateRight(ListNode* head, int k) {
        long sz = 0;
        int r;
        ListNode* cur = head;
        ListNode* tail;
        if(head == nullptr || k == 0)
            return head;
        while(cur != nullptr) {
            sz++;
            tail = cur;
            cur = cur -> next;
        }
        tail -> next = head;
        k = k%sz;
        ListNode* ans;
        ListNode* cur2 = head;
        for(int i=0;i<sz-k-1;i++) {
            cur2 = cur2 -> next;
        }
        ans = cur2 -> next;
        cur2 -> next = nullptr;
        return ans;
    }
};
