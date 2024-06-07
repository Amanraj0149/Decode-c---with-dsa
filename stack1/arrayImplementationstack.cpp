#include<iostream>
#include<stack>
using namespace std;
class Stack{ // user defined data structure
 public:
   int arr[5];
   int idx;
   // constructor 
   Stack(){
      idx=-1;
   }
    void push(int val){
      if(idx==sizeof(arr)/sizeof(arr[0])-1){
         cout<<"stack is full"<<endl;
         return;
      }
      idx++;
      arr[idx]=val;
    }
    void pop(){
      if(idx==-1){
         cout<<"stack is empty"<<endl;
         return;
      }
      idx--;
    }
   int top(){
       if(idx==-1){
         cout<<"stack is empty"<<endl;
         return -1;
      }
      return arr[idx];
   }
   int size(){
      return idx+1;
   }

};
int main(){
       Stack st;
        cout<<st.top()<<endl;
       st.push(10);
       st.push(20);
       st.push(30);
       st.push(40);
       st.push(50);
       st.push(60);
        cout<<st.size()<<endl;
        cout<<st.top()<<endl;
}