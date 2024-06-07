#include<iostream>
using namespace std;
int main(){
    int n;
    int a=1,b=1;
    int sum=0;
    cout<<"enter the number ";
    cin>>n;
    for(int i=1;i<=n-2;i++){
        sum=a+b;
        a=b;
        b=sum;
    }
    cout<<b;
}