#include <iostream>

using namespace std;

class SingleLinkedList
{
private:
    struct Node
    {
        int data;
        Node *next;

        Node(int val)
        {
            data = val;
            next = nullptr;
        }
    };

    Node *head;

public:
    // Constructor
    SingleLinkedList(int val)
    {
        head = new Node(val);
    }

    // Display / Traversal
    void display()
    {
        if (head == nullptr)
        {
            cout << "List is empty" << endl;
            return;
        }

        Node *temp = head;

        while (temp != nullptr)
        {
            cout << temp->data << " -> ";
            temp = temp->next;
        }

        cout << "nullptr" << endl;
    }

    // Insert at Front
    void insertAtFront(int val)
    {
        Node *newNode = new Node(val);

        newNode->next = head;
        head = newNode;
    }

    // Insert at End
    void insertAtEnd(int val)
    {
        Node *newNode = new Node(val);

        if (head == nullptr)
        {
            head = newNode;
            return;
        }

        Node *temp = head;

        while (temp->next != nullptr)
        {
            temp = temp->next;
        }

        temp->next = newNode;
    }

    // Insert at Position
    void insertAtPosition(int val, int position)
    {
        if (position <= 0)
        {
            cout << "Invalid position" << endl;
            return;
        }

        if (position == 1)
        {
            insertAtFront(val);
            return;
        }

        Node *temp = head;

        for (int i = 1; i < position - 1 && temp != nullptr; i++)
        {
            temp = temp->next;
        }

        if (temp == nullptr)
        {
            cout << "Invalid position" << endl;
            return;
        }

        Node *newNode = new Node(val);

        newNode->next = temp->next;
        temp->next = newNode;
    }

    // Delete from Front
    void deleteFromFront()
    {
        if (head == nullptr)
        {
            cout << "List is empty" << endl;
            return;
        }

        Node *temp = head;
        head = head->next;

        delete temp;
    }

    // Delete from End
    void deleteFromEnd()
    {
        if (head == nullptr)
        {
            cout << "List is empty" << endl;
            return;
        }

        if (head->next == nullptr)
        {
            delete head;
            head = nullptr;
            return;
        }

        Node *temp = head;

        while (temp->next->next != nullptr)
        {
            temp = temp->next;
        }

        delete temp->next;
        temp->next = nullptr;
    }

    // Delete from Position
    void deleteFromPosition(int position)
    {
        if (head == nullptr)
        {
            cout << "List is empty" << endl;
            return;
        }

        if (position <= 0)
        {
            cout << "Invalid position" << endl;
            return;
        }

        if (position == 1)
        {
            deleteFromFront();
            return;
        }

        Node *temp = head;

        for (int i = 1; i < position - 1 && temp != nullptr; i++)
        {
            temp = temp->next;
        }

        if (temp == nullptr || temp->next == nullptr)
        {
            cout << "Invalid position" << endl;
            return;
        }

        Node *nodeToDelete = temp->next;

        temp->next = nodeToDelete->next;

        delete nodeToDelete;
    }

    // Search
    void search(int val)
    {
        Node *temp = head;
        int position = 1;

        while (temp != nullptr)
        {
            if (temp->data == val)
            {
                cout << "Element found at position "
                     << position << endl;
                return;
            }

            temp = temp->next;
            position++;
        }

        cout << "Element not found" << endl;
    }

    // Update
    void update(int oldVal, int newVal)
    {
        Node *temp = head;

        while (temp != nullptr)
        {
            if (temp->data == oldVal)
            {
                temp->data = newVal;
                return;
            }

            temp = temp->next;
        }

        cout << "Element not found" << endl;
    }

    // Count / Length
    int length()
    {
        int count = 0;

        Node *temp = head;

        while (temp != nullptr)
        {
            count++;
            temp = temp->next;
        }

        return count;
    }

    // Reverse
    void reverse()
    {
        Node *prev = nullptr;
        Node *curr = head;
        Node *next = nullptr;

        while (curr != nullptr)
        {
            next = curr->next;
            curr->next = prev;
            prev = curr;
            curr = next;
        }

        head = prev;
    }

    // Find Minimum
    int findMin()
    {
        if (head == nullptr)
        {
            cout << "List is empty" << endl;
            return -1;
        }

        int minValue = head->data;

        Node *temp = head->next;

        while (temp != nullptr)
        {
            if (temp->data < minValue)
            {
                minValue = temp->data;
            }

            temp = temp->next;
        }

        return minValue;
    }

    // Find Maximum
    int findMax()
    {
        if (head == nullptr)
        {
            cout << "List is empty" << endl;
            return -1;
        }

        int maxValue = head->data;

        Node *temp = head->next;

        while (temp != nullptr)
        {
            if (temp->data > maxValue)
            {
                maxValue = temp->data;
            }

            temp = temp->next;
        }

        return maxValue;
    }

    // Find Middle
    void findMiddle()
    {
        if (head == nullptr)
        {
            cout << "List is empty" << endl;
            return;
        }

        Node *slow = head;
        Node *fast = head;

        while (fast != nullptr && fast->next != nullptr)
        {
            slow = slow->next;
            fast = fast->next->next;
        }

        cout << "Middle element: " << slow->data << endl;
    }

    // Remove Duplicates
    void removeDuplicates()
    {

        Node *temp = head;

        while (temp != nullptr && temp->next != nullptr)
        {
            if (temp->data == temp->next->data)
            {
                Node* duplicate = temp->next;
                temp -> next = duplicate -> next;
                delete duplicate;
            }
            else
            {
                temp = temp->next;
            }
        }
    }

    void removeDuplicatesFromUnSortedList()
    {
        Node* current = head;

        while (current != nullptr)
        {
            Node* temp = current;

            while (temp->next != nullptr)
            {
                if (temp->next->data == current->data)
                {
                    Node* duplicate = temp->next;

                    temp->next = duplicate->next;

                    delete duplicate;
                }
                else
                {
                    temp = temp->next;
                }
            }

            current = current->next;
        }
    }


    // Clear Entire List
    void clear()
    {
        Node *temp;

        while (head != nullptr)
        {
            temp = head;
            head = head->next;

            delete temp;
        }
    }

    // Destructor
    ~SingleLinkedList()
    {
        clear();
    }
};

int main()
{
    SingleLinkedList *list = new SingleLinkedList(10);

    // Display
    list->display();

    // Insert at Front
    list->insertAtFront(20);
    list->insertAtFront(30);

    // Insert at End
    list->insertAtEnd(40);
    list->insertAtEnd(50);

    list->display();

    // Insert at Position
    list->insertAtPosition(25, 3);

    list->display();

    // Search
    list->search(40);

    // Update
    list->update(40, 45);

    list->display();

    // Length
    cout << "Length: " << list->length() << endl;

    // Minimum
    cout << "Minimum: " << list->findMin() << endl;

    // Maximum
    cout << "Maximum: " << list->findMax() << endl;

    // Middle
    list->findMiddle();

    // Delete from Front
    list->deleteFromFront();

    list->display();

    // Delete from End
    list->deleteFromEnd();

    list->display();

    // Delete from Position
    list->deleteFromPosition(2);

    list->display();

    // Reverse
    list->reverse();

    list->display();

    // Remove duplicates
    list->removeDuplicates();

    // Clear
    list->clear();

    list->display();

    delete list;

    return 0;
}