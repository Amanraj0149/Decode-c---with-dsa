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

class LinkedList {
public:
    Node* head;
    Node* tail;
    int size;

    LinkedList() {
        head = tail = nullptr;
        size = 0;
    }

    void insertAtEnd(int val) {
        Node* temp = new Node(val);
        if (size == 0)
            head = tail = temp;
        else {
            tail->next = temp;
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
            head = temp;
        }
        size++;
    }
      void insertAtIdx(int idx ,int val) {
        if(idx<0 || idx>size) cout<<"INVALID INDEX"<<endl;
        else if(idx==0) insertAtHead(val);
        else if(idx==size) insertAtEnd(val);
        else{
             Node*t = new Node(val);
             Node*temp =head;
             for(int i=0;i<=idx-1;i++){
                temp=temp->next;
             }
             t->next =temp->next;
             temp->next =t;
             size++;
        }
    }
  int getatIdx(int idx){
     if(idx<0 || idx>=size) {
        cout<<"INVALID INDEX";
        return -1;
     }
        else if(idx==0) return head->val;
        else if(idx==size) return tail->val;
       else {
            Node*temp=head;
            for(int i=0;i<idx;i++){
                temp=temp->next;
            }
            return temp->val ;
        }
  }
  void deleteAtHead(){
    if(size==0){
        cout<<"list is empty";
        return;
    }
    head=head->next;
    size--;
  }
    void deleteAtTail(){
    if(size==0){
        cout<<"list is empty";
        return;
    }
    Node*temp =head;
    while(temp->next!=tail){
       temp=temp->next;
    }
      temp->next=nullptr;
      tail=temp;
    size--;
  }
     void deleteAtIdx(int idx){
        if(size==0){
            cout<<"List is Empty";
            return;
        }
        if(idx<0 || idx>=size){
         cout<<"invalid index";
         return;
        } 
        else if(idx==0) return deleteAtHead();
        else if(idx==size-1) return deleteAtTail();
        else{
            Node*temp=head;
            for(int i=1;i<=idx-1;i++){
                temp=temp->next;
            }
            temp->next = temp->next->next;
            size--;
        }
     }

    void display() {
        Node* temp = head;
        while (temp != nullptr) {
            cout << temp->val << " ";
            temp = temp->next;
        }
        cout <<size<< endl;
    }
};

int main() {
    LinkedList ll;
    ll.insertAtEnd(10); // {10} 
    ll.display();
    ll.insertAtEnd(20); // {10->20->NULL}
    ll.display();
     ll.insertAtEnd(30);
      ll.insertAtEnd(40);
       ll.display();
       ll.insertAtHead(50);
       ll.display();
       ll.insertAtIdx(3,80); // 50,10,20,30,80,40
          ll.display();
        //   cout<<ll.getatIdx(3);
          ll.deleteAtHead();
           ll.display();
            ll.deleteAtTail();
             ll.display();
             ll.deleteAtIdx(3);
            ll.display();
    return 0;
}
