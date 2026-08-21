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
    ListNode* deleteDuplicates(ListNode* head) {
        // Pass 1: count frequencies
        unordered_map<int, int> count;
        ListNode* current = head;
        while (current) {
            count[current->val]++;
            current = current->next;
        }

        // Pass 2: remove nodes with count > 1
        ListNode dummy(0, head);
        ListNode* prev = &dummy;
        while (prev->next) {
            if (count[prev->next->val] > 1) {
                // Skip this node
                prev->next = prev->next->next;
            } else {
                prev = prev->next;
            }
        }

        return dummy.next;
    }
};