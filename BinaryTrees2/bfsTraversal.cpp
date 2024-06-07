#include <iostream>
using namespace std;

class Node
{
public:
  int val;
  Node *left;
  Node *right;
  Node(int val)
  {
    this->val = val;
    this->left = NULL;
    this->right = NULL;
  }
};
void preorder(Node *root)
{
  if (root == NULL)
    return;                 // base case
  cout << root->val << " "; // root
  preorder(root->left);     // left
  preorder(root->right);    // right
}
void Inorder(Node *root)
{
  if (root == NULL)
    return;                 // base case
  Inorder(root->left);      // left
  cout << root->val << " "; // root
  Inorder(root->right);     // right
}
void postorder(Node *root)
{
  if (root == NULL)
    return;                 // base case
  postorder(root->left);    // left
  postorder(root->right);   // right
  cout << root->val << " "; // root
}

int levels(Node *root)
{
  if (root == NULL)
    return 0;
  return 1 + max(levels(root->left), levels(root->right));
}
void nthLevel(Node *root, int curr, int level)
{
  if (root == NULL)
    return; // base case
  if (curr == level)
  {
    cout << root->val << " ";
    return;
  } // root
  nthLevel(root->left, curr + 1, level);  // left
  nthLevel(root->right, curr + 1, level); // right
}

void nthLevelRev(Node *root, int curr, int level)
{
  if (root == NULL)
    return; // base case
  if (curr == level)
  {
    cout << root->val << " ";
    return;
  } // root
  nthLevelRev(root->right, curr + 1, level); // left
  nthLevelRev(root->left, curr + 1, level);  // right
}

void LevelOrder(Node *root)
{
  int n = levels(root);
  for (int i = 0; i <= n; i++)
  {
    nthLevel(root, 1, i);
  }
}
void LevelOrderRev(Node *root)
{
  int n = levels(root);
  for (int i = 0; i <= n; i++)
  {
    nthLevelRev(root, 1, i);
    cout << endl;
  }
}
int main()
{
  Node *a = new Node(1);
  Node *b = new Node(2);
  Node *c = new Node(3);
  Node *d = new Node(4);
  Node *e = new Node(5);
  Node *f = new Node(6);
  Node *g = new Node(7);

  a->left = b;
  a->right = c;
  b->left = d;
  b->right = e;
  c->left = f;
  c->right = g;
  // preorder(a);
  // cout<<endl;
  // Inorder(a);
  // cout<<endl;
  // postorder(a);
  // cout<<endl;

  /* level order Traversal
  nthLevel(a,1,1);
  nthLevel(a,1,2);
  nthLevel(a,1,3); */
  // LevelOrder(a);
  LevelOrderRev(a);
}