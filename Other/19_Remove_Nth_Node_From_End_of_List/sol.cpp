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
    ListNode* removeNthFromEnd(ListNode* head, int n) {
        ListNode* cur = head;
        vector<ListNode*> l;
        while(cur != nullptr) {
            l.emplace_back(cur);
            cur = cur -> next;
        }
        if(n == 1 && l.size() != 1) {
            l[l.size()-2] -> next = nullptr;
            // delete(l[1]);
        }
        else if(n == l.size()) {
            head = l[0] -> next;
            // delete(l[0]);
        }
        else {
            int i = l.size() - n;
            // delete(l[i]);
            l[i-1] -> next = l[i+1];
        }
        return head;
    }
};
