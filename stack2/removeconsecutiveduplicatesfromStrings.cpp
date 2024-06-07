#include<iostream>
#include<algorithm>
#include<Stack>
using namespace std;

string removeconsucativeDuplicate(string s){
   stack<char>st;
   st.push(s[0]);
   for(int i=0;i<s.size();i++){
    if(s[i]!=st.top()) st.push(s[i]);
   }
   s="";
   while(st.size()>0){
    s+=st.top();
    st.pop();
   } 
  reverse(s.begin(),s.end());
 return s;
}

int main(){
 string s= "aaabbbcddefffaagg";
 cout<< removeconsucativeDuplicate(s);
}
