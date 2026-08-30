/*
// Definition for a Node.
class Node {
public:
    int val;
    Node* next;
    Node* random;
    
    Node(int _val) {
        val = _val;
        next = NULL;
        random = NULL;
    }
};
*/

class Solution {
public:
   Node* copyRandomList(Node* head) {
    if (!head) return nullptr;

    // Pass 1: create copy nodes and build the mapping
    unordered_map<Node*, Node*> nodeMap;
    Node* current = head;
    while (current) {
        nodeMap[current] = new Node(current->val);
        current = current->next;
    }

    // Pass 2: wire up next and random pointers
    current = head;
    while (current) {
        nodeMap[current]->next = nodeMap[current->next];
        nodeMap[current]->random = nodeMap[current->random];
        current = current->next;
    }

    return nodeMap[head];
}
};