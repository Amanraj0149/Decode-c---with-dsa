#include<iostream>
using namespace std;
int main(){
    cout<<"Enter the marks";
    int n;
    cin>>n;
    if(n>91 && n<=100){
        cout<<"excellent";
    }
    if(n>=81 && n<=90){
        cout<<"very good";
    }
     if(n>=71 && n<=80){
        cout<<"Good";
    }
    if(n>=61 && n<=70){
        cout<<"can do better";
    }
    if(n>=51 && n<=60){
    cout<<"Average";
}
    if(n>=41 && n<=50){
    cout<<"Below Average";
}

}
