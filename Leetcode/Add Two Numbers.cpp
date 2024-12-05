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
        int total = 0, carry = 0;

        ListNode* head = new ListNode();
        ListNode* result = head;

        ListNode* current1 = l1;
        ListNode* current2 = l2;

        while(current1 != NULL || current2 != NULL || carry) {
            total = carry;

            if (current1 != NULL) {
                total += current1->val;
                current1 = current1->next;
            }

            if (current2 != NULL) {
                total += current2->val;
                current2 = current2->next;
            }

            carry = total / 10;
            total = total % 10;

            head->next = new ListNode(total);
            head = head->next;
        }
        return result->next;
    }
};
