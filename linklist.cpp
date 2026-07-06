#include <iostream>
using namespace std;

class linklist
{
private:
    struct Node
    {
        int data;
        Node *next;
        Node(int val) : data(val), next(nullptr) {}; // Constructor for easy creation
    };
    Node *head; // starting point of our list

public:
    // Constructor: initialize an empty lis
    linklist() : head(nullptr) {};

    // Destructor: clean up memory to prevent leaks
    ~linklist()
    {
        Node *current = head;
        while (current != nullptr)
        {
            Node *next = current->next;
            delete current;
            current = next;
        }
    }

    // Add a node to the front
    void insertAtFront(int val)
    {
        Node *newNode = new Node(val);
        newNode->next = head;
        head = newNode;
    }

    void insertAtEnd(int val)
    {
        Node *newNode = new Node(val);
        // this s for if the link list is empty
        if (head == nullptr)
        {
            head = newNode;
            return;
        }
        //  this is for traveersing the all link list and go to last
        // it traverse until it find the nullptr, and after finding the null pointer it set their next to the newNode
        Node *temp = head;
        while (temp->next)
        {
            temp = temp->next;
        }
        temp->next = newNode;
    }

    void insertAtIndex(int val, int index)
    {
        if (index == 0)
        {
            insertAtFront(val);
            return;
        }

        Node *newNode = new Node(val);
        Node *temp = head;

        for (int i = 0; i < index - 1; i++)
        {
            if (temp == nullptr)
            {
                cout << "Index out of bound" << endl;
                delete newNode;
                return;
            }
            temp = temp->next;
        }

        // 3. Perform the "Wedge"
        // First, connect the new node to the rest of the list
        newNode -> next = temp -> next;

        // Then, connect the previous node to the new node
        temp -> next = newNode;
    }

    void display()
    {
        Node *temp = head;
        while (temp != nullptr)
        {
            std::cout << temp->data << " -> ";
            temp = temp->next;
        }
        std::cout << "NULL" << std::endl;
    }
};

int main()
{
    linklist list;

    list.insertAtFront(10);
    list.insertAtFront(5);
    list.insertAtEnd(20);
    list.insertAtIndex(25,2);
    list.insertAtIndex(1,0);

    std::cout << "My Linked List: ";
    list.display();
    return 0;
}