#include<iostream>
#include<vector>
using namespace std;

class Stack{
public:
  vector<int> v;
  Stack(){
    
  }
  void push(int val){
    v.push_back(val);
  }
  void pop(){
    if(v.size()==0){
        cout<<"stack is empty"<<endl;
        return;
    }
    v.pop_back();
  }
  int top(){
    if(v.size()==0){
        cout<<"stack is empty"<<endl;
        return -1; // Return a default value indicating an empty stack
    }
    return v[v.size()-1];
  }
  int size(){
    return v.size();
  }
};

int main(){
  Stack st;
  st.push(10);
  st.push(20);
  st.push(30);
  st.push(40);
  st.push(50);
  st.push(60);
  cout << "Stack size: " << st.size() << endl;
  cout << "Top element of the stack: " << st.top() << endl;
  return 0;
}
  