class MyLinkedList {
public:
    struct LinkedNode {
        int val;
        LinkedNode* next;
        LinkedNode(int val) : val(val), next(nullptr) {}
    };

    MyLinkedList() {
        dummy = new LinkedNode(0);
        size = 0;
    }

    int get(int index) {
        if (index < 0 || index >= size) 
            return -1;
        LinkedNode* current = dummy->next;
        for (int i = 0; i < index; ++i) {
            current = current->next;
        }
        return current->val;
    }

    void addAtHead(int val) {
        LinkedNode* newNode = new LinkedNode(val);
        newNode->next = dummy->next;
        dummy->next = newNode;
        size++;
    }
    void addAtTail(int val) {
        LinkedNode* newNode = new LinkedNode(val);
        LinkedNode* current = dummy;

        while (current->next != nullptr) {
            current = current->next;
        }
        current->next = newNode;
        size++;
    }

    void addAtIndex(int index, int val) {
        if (index < 0 || index > size) {
            return;
        }
        LinkedNode* current = dummy; 
        for (int i = 0; i < index; ++i) {
            current = current->next;
        }

        LinkedNode* newNode = new LinkedNode(val); 
        newNode->next = current->next;             
        current->next = newNode;                

        size++;
    }

    void deleteAtIndex(int index) {
        if (index < 0 || index >= size) 
            return;

        LinkedNode* current = dummy; 
        for (int i = 0; i < index; ++i) 
            current = current->next;

        LinkedNode* nodeToDelete = current->next; 
        current->next = nodeToDelete->next;       
        
        delete nodeToDelete;
        size--;
    }

    ~MyLinkedList() {
        LinkedNode* current = dummy;
        while (current != nullptr) {
            LinkedNode* nextNode = current->next;
            delete current;
            current = nextNode; 
        }
        dummy = nullptr;
        size = 0;
    }

private:
    int size;
    LinkedNode* dummy;
};
