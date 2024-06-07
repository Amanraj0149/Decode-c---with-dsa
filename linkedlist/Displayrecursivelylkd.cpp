#include<iostream>
using namespace std;

class Node {
public:
    int val;
    Node* next;
  
    Node(int val) {
        this->val = val;
        this->next = nullptr; // Corrected initialization
    }
};

void displayrev(Node* head) {
    if (head == nullptr)
        return;
     displayrec(head->next);  // cal
    cout << head->val << " "; // kaam 
   
}
void displayrec(Node* head) {
    if (head == nullptr)
        return;
    cout << head->val << " "; // kaam 
    displayrec(head->next);  // cal
}

int main() {
    Node* a = new Node(10);
    Node* b = new Node(20);
    Node* c = new Node(30);
    Node* d = new Node(40);
    a->next = b;
    b->next = c;
    c->next = d;

    displayrec(a);
   displayrev(a); // revrse order printing linkedlist
}