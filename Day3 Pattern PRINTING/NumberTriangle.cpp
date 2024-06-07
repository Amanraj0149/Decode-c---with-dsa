#include<iostream>
using namespace std;
int main(){
    int n;
    cout<<"enter the value of rows:";
    cin>>n;
    for(int i=1;i<=n;i+=2){
        for(int j=1;j<=i;j+=2){
       cout<<j;
        }
   cout<<endl;
    }
    
    }