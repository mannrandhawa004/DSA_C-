class MyLinkedList {
    struct Node {
        public:
            int data;
            Node* next;
            Node(int val) {
                data = val;
                next = nullptr;
            }
    };

public:
    Node* head;
    MyLinkedList() {
        head = nullptr;
    }
    
    int get(int index) {
        Node* temp = head;
        int count = 0;
        while(temp != nullptr) {
            if(index == count) {
                return temp->data;
            }
            temp = temp->next;
            count++;
        }
        return -1;
    }
    
    int getLength(Node* head){
        Node* temp = head;
        int count = 0;
        while(temp!= nullptr){
            count++;
            temp=temp->next;
        }
        return count;
    }

    void addAtHead(int val) {
        Node* newNode = new Node(val);
        newNode -> next = head;
        head = newNode; 
    }
    
    void addAtTail(int val) {
        if(head == nullptr) {
            head = new Node(val);
            return;
        }
        Node* temp = head;
        while(temp->next != nullptr) {
            temp = temp->next;
        }
        Node* newnode = new Node(val);
        temp->next = newnode;
    }
    
    void addAtIndex(int index, int val) {
        if(index == 0) {
            Node* newNode = new Node(val);
            newNode->next = head;
            head = newNode;
            return;
        }
        else if(index == getLength(head)){
            Node* temp = head;
            while(temp->next != nullptr){
                temp=temp->next;
            }
            Node* NewNode = new Node(val);
            temp->next = NewNode;
            return;
        }
        int count = 0;
        Node* temp = head;
        while(temp != nullptr) {
            if(count == index - 1) {
                Node* newNode = new Node(val);
                newNode->next = temp->next;
                temp->next = newNode;
                break;
            }
            count++;
            temp = temp->next;
        }
    }
    
    void deleteAtIndex(int index) {
        if(head == nullptr) {
            return;
        }
        else if(index == 0){
            Node* temp = head;
            head = head->next;
            delete temp;
            return;
        }
        int count = 0;
        Node* temp = head;
        Node* prev = nullptr;
        while(temp != nullptr){
            if(count == index){
                prev->next = temp->next;
                delete temp;
                return;
            }
            count++;
            prev = temp;
            temp = temp->next;
        }
    }
};

/**
 * Your MyLinkedList object will be instantiated and called as such:
 * MyLinkedList* obj = new MyLinkedList();
 * int param_1 = obj->get(index);
 * obj->addAtHead(val);
 * obj->addAtTail(val);
 * obj->addAtIndex(index,val);
 * obj->deleteAtIndex(index);
 */