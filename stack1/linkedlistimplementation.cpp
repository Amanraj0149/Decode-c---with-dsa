#include<iostream>
using namespace std;

class Node {
public:
    int val;
    Node* next;
    Node(int value) {
        val = value;
        next = NULL;
    }
};

class Stack {
public:
    Node* head;
    int size;

    Stack() {
        head = NULL;
        size = 0;
    }

    void push(int val) {
        Node* temp = new Node(val);
        temp->next = head;
        head = temp;
        size++;
    }

    void pop() {
        if (head == NULL) return;
        Node* temp = head;
        head = head->next;
        delete temp;
        size--;
    }

    int top() {
        if (head == NULL) {
            cout << "stack is empty!" << endl;
            return -1;
        }
        return head->val;
    }
    
 void print(Node* temp){ // reverse kiye hai linkedlist ko using recursion ,,,
    if(temp==NULL) return;
    print(temp->next);
    cout<<temp->val<<" ";
    }

    void display(){
        Node* temp=head;
        print(temp);
        cout<<endl;
    }

    int getSize() {
        return size;
        }
};

int main() {
    Stack st;
    st.push(10);
    st.push(20);
    st.push(30);
    st.push(40);
    st.push(50);
    st.push(60);
    cout << st.getSize() << endl;
    cout << st.top() << endl;
    st.display();
}
