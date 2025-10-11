class Solution {
public:
    ListNode* deleteDuplicates(ListNode* head) {
        if(head == nullptr)
            return head;
        ListNode dummy(1000);
        dummy.next = head;
        ListNode* cur = head;
        ListNode* prev = &dummy;
        int flag = 0;
        while(cur -> next != nullptr) {
            flag = (cur -> val == cur -> next -> val); 
            while(cur -> val == cur -> next -> val) {
                cur = cur -> next;
                if(cur -> next == nullptr)
                    break;
            }
            if(flag) {
                cout << cur -> val << endl;
                cur = cur -> next;
                if(prev -> val != 1000) {
                    prev -> next = cur;
                }
                else {
                    head = cur;
                    dummy.next = head;
                    prev = &dummy;
                }
            }
            else {
                cur = cur -> next;
                prev = prev -> next;
            }
            if(cur == nullptr) 
                break;
        }
        return head;
    }
};
