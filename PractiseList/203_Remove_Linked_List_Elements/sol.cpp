class Solution {
public:
    ListNode* removeElements(ListNode* head, int val) {
        ListNode* dummyHead = new ListNode(0);
        dummyHead->next = head;
        while(head != NULL && head->val == val) {
            ListNode* dummyHead = head;
            head = head -> next;
            delete dummyHead;
        }
        ListNode* cur = head;
        while(cur != NULL && cur -> next != NULL) {
            if(cur -> next -> val == val) {
                ListNode* tmp = cur -> next;
                cur -> next = cur -> next -> next;
                delete tmp;
            }
            else 
                cur = cur -> next;
        }
        return head;
    }
};
