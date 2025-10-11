class Solution {
public:
    void deleteNode(ListNode* node) {
        ListNode* tail;
        while(node -> next != nullptr) {
            node -> val = node -> next -> val;
            tail = node;
            node = node -> next;
        }
        tail -> next = nullptr;
    }
};
