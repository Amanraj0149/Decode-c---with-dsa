#include<iostream>
using namespace std;

class Node{
public:
    int val;
    Node* left;
    Node* right;
    Node(int val) {
        this->val = val;
        this->left = NULL;
        this->right = NULL;
    }
};
  void preorder(Node* root){
    if(root==NULL) return;// base case
    cout<<root->val<<" "; //root
    preorder(root->left); //left
    preorder(root->right);//right
  }
    void Inorder(Node* root){
    if(root==NULL) return;// base case
    Inorder(root->left); //left
    cout<<root->val<<" "; //root
    Inorder(root->right);//right
  }
  void postorder(Node* root){
    if(root==NULL) return;// base case
   postorder(root->left); //left
    postorder(root->right);//right
     cout<<root->val<<" "; //root
  }

  

   void LevelOrder(Node* root){
    int n=levels(root);
    for(int i=0;i<=n;i++){
 nthLevel(root,1,i);
    }
   }
    void LevelOrderRev(Node* root){
    int n=levels(root);
    for(int i=0;i<=n;i++){
 nthLevelRev(root,1,i);
  cout<<endl;
    }
   }
int main(){
    //construct 
    int arr[]={1,2,3,4,5,6,INT_MIN,INT_MIN,7,8,9};
    Node*root=new construct(arr[])
   
    LevelOrderRev(a);

}