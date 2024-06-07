#include<iostream>
#include<string>
#include<algorithm>
using namespace std;
int main(){
    string s= "abcdef";
    // s.substr(index,length)
    cout<<s.substr(2); //cdef
    cout<<s.substr(1,3);//bcd

    // string str;
    // cout<<"enter a string:";
    // cin>>str;
    // //abcdefgh -> length()/ n=8;
    // int n=str.length();
    // cout<<str.substr(n/2);
    
}