#include<iostream>
using namespace std;

class Node {
public:
    int val;
    Node* next;
    Node* prev; // extra for dll
    Node(int val) {
        this->val = val;
        this->next = NULL;
        this->prev = NULL;
    }
};

class DLL { // user define data structure
public:
    Node* head;
    Node* tail;
    int size;
    DLL() {
        head = tail = NULL;
        size = 0;
    }

    void insertTail(int val) {
        Node* temp = new Node(val);
        if (size == 0) 
            head = tail = temp;
        else {
            tail->next = temp;
            temp->prev = tail;
            tail = temp;
        }
        size++;
    }

    void insertAtHead(int val) {
        Node* temp = new Node(val);
        if (size == 0) 
            head = tail = temp;
        else {
            temp->next = head;
            head->prev = temp;
            head = temp;
        }
        size++;
    }

    void insertAtIdx(int idx, int val) {
        if (idx < 0 || idx > size)
            cout << "Invalid Index" << endl;
        else if (idx == 0)
            insertAtHead(val);
        else if (idx == size)
            insertTail(val);
        else {
            Node* t = new Node(val);
            Node* temp = head;
            for (int i = 1; i <= idx - 1; i++) {
                temp = temp->next;
            }
            t->next = temp->next;
            temp->next = t;
            t->prev = temp;
            t->next->prev = t;
            size++;
        }
    }

    void deleteAtHead() {
        if (size == 0) {
            cout << "List is Empty!";
            return;
        }
        head = head->next;
        if (head) head->prev = NULL;
        if (head == NULL) tail = NULL;
        size--;
    }

    void deleteAtTail() {
        if (size == 0) {
            cout << "List is Empty!";
            return;
        }
        else if (size == 1) {
            deleteAtHead();
            return;
        }
        Node* temp = tail->prev;
        temp->next = NULL;
        delete tail;
        tail = temp;
        size--;
    }

    void deleteAtIdx(int idx) {
        if (idx < 0 || idx >= size) {
            cout << "Invalid Index" << endl;
            return;
        }
        if (idx == 0) {
            deleteAtHead();
            return;
        }
        if (idx == size - 1) {
            deleteAtTail();
            return;
        }
        Node* temp = head;
        for (int i = 1; i < idx; i++) {
            temp = temp->next;
        }
        Node* toDelete = temp->next;
        temp->next = temp->next->next;
        temp->next->prev = temp;
        delete toDelete;
        size--;
    }

    int getAtIdx(int idx) {
        if (idx < 0 || idx >= size) {
            cout << "Invalid Index" << endl;
            return -1;
        }
        Node* temp = head;
        for (int i = 0; i < idx; i++) {
            temp = temp->next;
        }
        return temp->val;
    }

    void display() {
        if (size == 0) {
            cout << "List is empty!" << endl;
            return;
        }
        Node* temp = head;
        while (temp != NULL) {
            cout << temp->val << " ";
            temp = temp->next;
        }
        cout << endl;
    }
};

int main() {
    DLL dll;
    dll.insertAtHead(2);
    dll.insertAtHead(1);
    dll.insertTail(3);
    dll.insertAtIdx(2, 5);
    dll.display(); // Output: 1 2 5 3
    dll.deleteAtIdx(2);
    dll.display(); // Output: 1 2 3
    cout << "Value at index 1: " << dll.getAtIdx(1) << endl; // Output: 2
    return 0;
}
