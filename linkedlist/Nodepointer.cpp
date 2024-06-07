#include<iostream>
using namespace std;
 class Node{
    public:
  int val;
  Node* next;
  Node( int val){
   this->val=val;
   this->next=NULL;
  }};
  void display(Node* head){
   int size=0;
 Node* temp=head;
 while(temp!=NULL){
   cout<<temp->val<<" ";
   size++;
   temp=temp->next;
   
 }
 cout<<size<<endl ;
  }
  void insertAtEnd(Node*head ,int val){
    Node* t=new Node(val);
    while(head->next!=NULL) head=head->next;
    head->next=t;
  }

   
int main(){
 Node* a=new Node(10);  // 1 node bana , jiske ander value gayi 10,Is nodeka adress store hua a mai;
 Node* b=new Node(20);
 Node* c=new Node(30);
 Node* d=new Node(40);
 a->next=b;
 b->next=c;
 c->next=d;
/* Node* temp=a;
 while(temp!=NULL){
    cout<<temp->val<<" "; 
    temp=temp->next;
 } */
 display(a);
insertAtEnd(a,50);
 display(a);
}