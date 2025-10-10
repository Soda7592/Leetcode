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
    ListNode* addTwoNumbers(ListNode* l1, ListNode* l2) {
        int carry = 0;
        ListNode* ans = new ListNode();
        ListNode* cur = ans;
        while(l1 != nullptr || l2 != nullptr) {
            if(l1 != nullptr && l2 != nullptr) {
                cur -> val = (l1 -> val + l2 -> val + carry)%10;
                carry = (l1 -> val + l2 -> val + carry)/10;
                l1 = l1 -> next;
                l2 = l2 -> next;
            }
            else if(l1 != nullptr && l2 == nullptr) {
                cur -> val = (l1 -> val + carry)%10;
                carry = (l1 -> val + carry)/10;
                l1 = l1 -> next;
            }
            else if(l1 == nullptr && l2 != nullptr) {
                cur -> val = (l2 -> val + carry)%10;
                carry = (l2 -> val + carry)/10;
                l2 = l2 -> next;
            }
            if(l1 != nullptr || l2 != nullptr) {
                cur -> next = new ListNode();
                cur = cur -> next;
            }
        }
        if(carry) {
            cur -> next = new ListNode();
            cur -> next -> val = 1;
        }
        return ans;
    }
};
