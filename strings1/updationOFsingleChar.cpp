#include<iostream>
#include<string>
using namespace std;
int main(){
     string str="raghav";
     cout<<str<<endl;
    // str[1]='o';
    // cout<<str;
    for(int i=0;str[i]!='\0'; i++){
        if( i%2==0) str[i]='a';
    }
        cout<<str<<endl;


}
// in c++ , strings are mutable