#include<iostream>
using namespace std;
int main(){
    int a,b;
    cout<<"enter base :";
    cin>>a>>b;
 bool flag =true;
 if(b<0){
    flag=false;
    b=-b;
 }
    float power =1;
    for(int i=1;i<=b;i++){
        power=power*a;
    }
    if(flag==false){
        power=1/power;
        b=-b;
    }
    cout<<power;
}
