 #include <bits/stdc++.h> 
using namespace std;
Node* merge(Node* a, Node* b) {
    Node* c = nullptr;
    Node* tempc = nullptr;
    while (a != nullptr && b != nullptr) {
        if (a->data < b->data) {
            if (c == nullptr) {
                c = tempc = a;
            } else {
                tempc->next = a;
                tempc = tempc->next;
            }
            a = a->next;
        } else {
            if (c == nullptr) {
                c = tempc = b;
            } else {
                tempc->next = b;
                tempc = tempc->next;
            }
            b = b->next;
        }
    }
    if (a == nullptr)
        tempc->next = b;
    else
        tempc->next = a;
    
    return c;
}

Node* sortLL(Node* head) {
    if (head == nullptr || head->next == nullptr)
        return head;

    Node* slow = head;
    Node* fast = head->next;
    while (fast != nullptr && fast->next != nullptr) {
        slow = slow->next;
        fast = fast->next->next;
    }
    Node* a = head;
    Node* b = slow->next;
    slow->next = nullptr;
    a = sortLL(a);
    b = sortLL(b);
    return merge(a, b);
}