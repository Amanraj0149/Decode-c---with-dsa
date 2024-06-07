#include<iostream>
using namespace std;
int main(){
    int n;
    cout<<"enter a number :";
    cin>>n;
    // for(int i=1;i<=2*n-1;i+=2){ //ap=a+(n-1)d 
    //     cout<<i<<endl;
    // }
 int a=1;
 for(int i=0;i<=n;i++){
    cout<<a<<endl;
    a=a+2;
 }

}