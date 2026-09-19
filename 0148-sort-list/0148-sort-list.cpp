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
    ListNode* merge(ListNode* left, ListNode* right) {
        ListNode dummy(0);
        ListNode* tail = &dummy;

        while (left != nullptr && right != nullptr) {

            if (left->val <= right->val) {
                tail->next = left;
                left = left->next;
            }
            else {
                tail->next = right;
                right = right->next;
            }

            tail = tail->next;
        }

        if (left != nullptr) {
            tail->next = left;
        }
        else {
            tail->next = right;
        }

        return dummy.next;
    };

    ListNode* sortList(ListNode* head) {
        // Base case
        if(head == nullptr || head -> next == nullptr){
            return head;
        }

        // Find Middle;
        ListNode* slow = head;
        ListNode* fast = head -> next;

        while(fast != nullptr && fast -> next != nullptr){
            slow = slow -> next;
            fast = fast -> next -> next;
        }

        // split the two link list
        ListNode* right = slow -> next;
        slow -> next = nullptr;

        // sort both halves
        ListNode* left = sortList(head);
        right = sortList(right);

        // Merge sorted halves
        return merge(left, right);
    }
};