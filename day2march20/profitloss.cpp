#include<iostream>
using namespace std;
int main(){
    int cp,sp;
    cout<<"enter the cost price :";
    cin>>cp;
    cout<<"enter the selling price :";
    cin>>sp;
    if(sp>cp){
        int profit =sp-cp;
        cout<<"profit is :"<<profit;
    }
    if(cp>sp){
        int loss =cp-sp;
    cout<<"loss is :"<<loss;
    }
    if(cp==sp){
        cout<<"No profit,no Loss!";

    }
}

     

