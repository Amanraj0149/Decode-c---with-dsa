#include<iostream>
using namespace std;

class Node {
public:
    int val;
    Node* next;

    Node(int val) {
        this->val = val;
        this->next = nullptr;
    }
};

class Queue {
public:
    Node* head;
    Node* tail;
    int size;

    Queue() {
        head = tail = nullptr;
        size = 0;
    }

    void push(int val) {
        Node* temp = new Node(val);
        if (size == 0)
            head = tail = temp;
        else {
            tail->next = temp;
            tail = temp;
        }
        size++;
    }

    void pop(){
        if(size == 0) {
            cout << "Queue is empty" << endl;
            return;
        }
        Node* temp = head; // purana wala node delete karne ke liye
        head = head->next;
        delete temp; // delete karne se memory wastage nhi hogi 
        size--;
    }

    int front() {
        if(size == 0) {
            cout << "Queue is empty" << endl;
            return -1;
        }
        return head->val;
    }
    int back() {
        if(size == 0) {
            cout << "Queue is empty" << endl;
            return -1;
        }
        return tail->val;
    }

    void display() {
        Node* temp = head;
        while (temp != nullptr) {
            cout << temp->val << " ";
            temp = temp->next;
        }
        cout << endl;
    }

    int getSize() {
        return size;
    }

    bool isEmpty() {
        return size == 0;
    }
};

int main() {
    Queue q;
    q.push(10);
    q.push(20);
    q.push(30);
    q.push(40);
    q.push(50);
    q.push(60); // This will not be added because the queue is full
    q.display();
    q.pop();
    q.display();
    cout << "Front element: " << q.front() << endl;
    cout << "Queue size: " << q.getSize() << endl;
    cout << "Is the queue empty? " << (q.isEmpty() ? "Yes" : "No") << endl;
    return 0;
}
