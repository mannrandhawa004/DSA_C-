class MyLinkedList {
    struct Node {
        int val;
        Node* next;
        Node(int v) : val(v), next(nullptr) {}
    };

    Node* sentinel;
    int size;

public:
    MyLinkedList() {
        sentinel = new Node(0);
        size = 0;
    }

    int get(int index) {
        if (index < 0 || index >= size) return -1;
        Node* current = sentinel->next;
        for (int i = 0; i < index; i++) {
            current = current->next;
        }
        return current->val;
    }

    void addAtHead(int val) {
        addAtIndex(0, val);
    }

    void addAtTail(int val) {
        addAtIndex(size, val);
    }

    void addAtIndex(int index, int val) {
        if (index < 0 || index > size) return;
        Node* pred = sentinel;
        for (int i = 0; i < index; i++) {
            pred = pred->next;
        }
        Node* newNode = new Node(val);
        newNode->next = pred->next;
        pred->next = newNode;
        size++;
    }

    void deleteAtIndex(int index) {
        if (index < 0 || index >= size) return;
        Node* pred = sentinel;
        for (int i = 0; i < index; i++) {
            pred = pred->next;
        }
        Node* toDelete = pred->next;
        pred->next = toDelete->next;
        delete toDelete;
        size--;
    }
};