#include<iostream>
#include<stack>
using namespace std;
int main(){
       stack<int> st;
       stack<int>vt;
       st.push(10);
       st.push(20);
       st.push(30);
       st.push(40);
       cout<<st.size()<<endl;
    //    cout<<st.top()<<endl;

           // PRINTING IN REVERSE ORDER
       while(st.size()>0){
        cout<<st.top()<<" ";
        vt.push(st.top());
        st.pop();
       }
         cout<<endl;
          // PRINTING IN  ORDER
       while(vt.size()>0){
        cout<<vt.top()<<" ";
        st.push(vt.top());
        vt.pop();
       }

}