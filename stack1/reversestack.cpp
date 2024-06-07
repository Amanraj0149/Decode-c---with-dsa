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
}
int main(){
       stack<int> st;
       stack<int>vt;
       stack<int>gt;
       st.push(10);
       st.push(20);
       st.push(30);
       st.push(40);
       print(st);
         
       while(st.size()>0){
        vt.push(st.top());
        st.pop();
       }
         
       while(vt.size()>0){
        gt.push(vt.top());
        vt.pop();
       }

       while(gt.size()>0){
        st.push(gt.top());
        gt.pop();
       }
       cout<<endl;
       // printing in reverse order
       print(st);

}