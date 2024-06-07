#include<iostream>
#include<string>
using namespace std;
int main(){
    // string str="aman";
    // cout<<str<<endl;
    // cout<<str[0];
    string s;
   //  cin>>s;  // aman raj ,only if given string has no spaces
   getline(cin,s);
    cout<<s; // aman-> sirf print hoga ,cin space ke baad kam nhi karega
}