#include<iostream>
#include<stack>
using namespace std;
void print(stack<int> st){
    stack<int> vt;
    while(st.size()>0){
        vt.push(st.top());
        st.pop();
       }
         
       while(vt.size()>0){
        cout<<vt.top()<<" ";
        st.push(vt.top());
        vt.pop();
       }
       cout<<endl; 
}

void  pushAtIdx(stack<int>& st, int idx,int val){
       stack<int> temp;
       while(st.size()>idx){
              temp.push(st.top());
              st.pop();
       }
       st.push(val);
       while(temp.size()>0){
              st.push(temp.top());
              temp.pop();
       }
}
void pushAtBottom(stack<int>& st, int val){
       stack<int> temp;
       while(st.size()>0){
              temp.push(st.top());
              st.pop();
       }
       st.push(val);
       while(temp.size()>0){
              st.push(temp.top());
              temp.pop();
       }
}
int main(){
       stack<int> st;
       stack<int>vt;
       st.push(10);
       st.push(20);
       st.push(30);
       st.push(40);
       print(st);  

     pushAtBottom(st,80);
     print(st);
     pushAtIdx(st,2,110);
     print(st);
}