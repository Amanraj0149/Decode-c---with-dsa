#include<iostream>
#include<string>
using namespace std;
string s= "AZYZXBYDXJK";
string str="";
for(int i=0;i<s.size();i++){
    if(s[i]>='X'){ // x ya x se jo bara hai usko rakhna hai
        str.push_back(s[i]);
    }
    sort(str.begin(),str.end());
    cout<<str;
}
// sort a string in decreasing order of values associated after removal of values smaller than x
// string s="ZYZXX"
// SORT= ZZYXX