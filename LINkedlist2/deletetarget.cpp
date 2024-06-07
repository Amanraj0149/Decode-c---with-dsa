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

  Node* deletenode(Node* head, int target){
    if(head->val == target) {
        head= head->next;
        return head;
    }
      Node*temp=head;
      // tab tak temp ko chalo jab tak target ke piche na pahuche;
      while(temp->next->val!=target){
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
      head=deletenode(head,30);
      display(head);
      
}

int main(void){
int v;
while(v--){
  char a,b,c,d,e,f;
  scanf("%c %c %c %c %c %c" ,&a,&b,&c,&d,&e,&f);
  if((a==b==c=='w') || (b==c==d=='w')||(d==e==f=='w'))
  printf("YES\n");
  else 
  printf("NO\n");
}
}

int main(void){
  int x;
  scanf("%d",&x);
  if(x>11)
  printf("YES\n");
  else
  printf("NO\n");
}
int main(void){
  int t;
  scanf("%d",&t);
  while(t--){
    int n,x,swipe=0,count=0;
    scanf("%d %d",&n,&x);
    char a[n];
    scanf("%s",a);
    if(a[0]=='0'){
      printf("NO\n");
    }
    else{
      swipe=x;
      for(int i=1;i<n;i++){
        if(a[i]=='0')
        swipe--;
        else
        swipe==x;
        if(swipe<0){
        count=1;
        break;
        }
      }
        if(count==1)
        printf("NO\n");
        else
        printf("YES\n");
      }
    }
  }
