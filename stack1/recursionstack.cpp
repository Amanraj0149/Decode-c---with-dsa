#include<iostream>
#include<stack>
using namespace std;
void  pushAtBottomRec(stack<int>& st,int val){
if(st.size()==0) {
    st.push(val);
    return;
}
int x=st.top(); // 40 ,30,20,10 
st.pop();
pushAtBottomRec(st,val);
st.push(x);
}
void displayrev(stack<int>& st){
if(st.size()==0) return;
int x=st.top(); // 40 ,30,20,10 
cout<<x<<" ";
st.pop();
displayrev(st);
st.push(x);
}
  void display(stack<int>& st){
if(st.size()==0) return;
int x=st.top(); // 40 ,30,20,10 
st.pop();
display(st);
cout<<x<<" ";
st.push(x);
}
   void reverse(stack<int>& st){
    if(st.size()==1) return;
    int x=st.top();
    st.top();
    reverse(st);
    pushAtBottomRec(st,x);
   }


int main(){
       stack<int> st;
       stack<int>vt;
       st.push(10);
       st.push(20);
       st.push(30);
       st.push(40);
      
      displayrev(st);
      cout<<endl;
      display(st);
    //   pushAtBottomRec(st,-10);
      cout<<endl;
      reverse(st);
      display(st);
   
}