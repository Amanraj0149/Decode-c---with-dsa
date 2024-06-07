#include<iostream>
using namespace std;
int main(){
    int n, m;
    cout<<"enter the number :";
    cin>>n;
    int sum=0;
    while(n>0){
        m=n%10;
        sum=sum+m;
        n/=10;
    }
    cout<<sum;
}