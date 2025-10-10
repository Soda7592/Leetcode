class Solution {
public:
    ListNode* swapPairs(ListNode* head) {
        vector<ListNode*> l;
        if(head == nullptr)
            return head;
        ListNode* cur = head;
        ListNode* ans = new ListNode();
        ListNode* anshead = ans;
        while(cur != nullptr) {
            l.emplace_back(cur);
            cur = cur -> next;
        }
        for(int i=0;i<l.size()-1;i+=2) {
            swap(l[i], l[i+1]);
        }
        for(int i=0;i<l.size();i++) {
            ans -> val = l[i] -> val;
            if(i != l.size()-1) {
                ans -> next = new ListNode();
                ans = ans -> next;
            }
        }
        return anshead;
    }
};
