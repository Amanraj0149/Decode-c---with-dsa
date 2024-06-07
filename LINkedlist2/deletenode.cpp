#include<iostream>
using namespace std;
class Node{ // user define data type
public:
int val;
Node*next;
Node(int val){
    this->val=val;
    this->next=nullptr;
   }
};

  Node* deletenode(Node* head, Node* target){
    if(head == target) {
        head= head->next;
        return head;
    }
      Node*temp=head;
      // tab tak temp ko chalo jab tak target ke piche na pahuche;
      while(temp->next!=target){
        temp=temp->next;
      }
      temp->next =temp->next->next;
      return head;
  }

   void display(Node* head) {
        while (head!= nullptr) {
            cout << head->val <<" ";
            head= head->next;
        }
       cout<<endl;
    }

int main(){
  Node* a=new Node(10);
   Node* b=new Node(20);
    Node* c=new Node(30);
     Node* d=new Node(40);
      Node* e=new Node(50);
      a->next=b;
      b->next=c;
      c->next=d;
      d->next=e;
      Node* head = a;
      display(a);
      head=deletenode(head,a);
      display(head);
      
}