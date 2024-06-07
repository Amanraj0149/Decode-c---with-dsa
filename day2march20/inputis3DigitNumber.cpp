#include<iostream>
using namespace std;
int main(){
    int n;
    cout<<"enter the number :";
    cin>>n;
    if(n>=100 && n<=999){
        cout<<"it is 3 digit number :"<<n;
    }
    else
    cout<<"It is not a 3 digit number :<<n";
}