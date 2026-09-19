/*
// Definition for a Node.
class Node {
public:
    int val;
    Node* prev;
    Node* next;
    Node* child;
};
*/

class Solution {
public:
    Node* flatten(Node* head) {
        Node* curr = head;

        while(curr != nullptr){
            if(curr -> child != nullptr){
                Node* nextNode = curr -> next;

                Node* childNode = flatten(curr -> child);

                curr -> next = childNode;
                childNode->prev = curr;

                curr -> child = nullptr;

                Node* childTail = childNode;

                while (childTail->next != nullptr) {
                    childTail = childTail->next;
                }

                childTail->next = nextNode;

                if (nextNode != nullptr) {
                    nextNode->prev = childTail;
                }
            }

            curr = curr->next;
        }

        return head;
    }
};