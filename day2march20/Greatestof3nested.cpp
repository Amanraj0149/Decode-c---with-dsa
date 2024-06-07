#include<iostream>
using namespace std;
int main(){
    int a,b,c;
    cout<<"enter the value a:";
    cin>>a;
    cout<<"enter the value b:";
    cin>>b;
     cout<<"enter the value c:";
    cin>>c;
    if(a>b){
        if(a>c){
            cout<<"the greatest number is a";
        }
        else
        cout<<"the greatest number is c";
    }
    else{
        if(b>c){
            cout<<"b is greatest";
        }
        
    else
    cout<<"c is greatest";
}
}