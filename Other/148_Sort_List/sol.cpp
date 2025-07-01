class Solution {
public:
    ListNode* sortList(ListNode* head) {
        if(head == NULL)
            return head;
        priority_queue<int, vector<int>, greater<int>> pq;
        ListNode* cur = head;
        while(cur != NULL) {
            pq.emplace(cur->val);
            cur = cur -> next;
        }
        ListNode* temp = new ListNode();
        ListNode* ans = temp;
        while(!pq.empty()) {
            auto top = pq.top();
            pq.pop();
            temp -> val = top;
            if(pq.empty())
                break;
            else
                temp -> next = new ListNode();
            temp = temp -> next;
        }
        return ans;
    }
};
