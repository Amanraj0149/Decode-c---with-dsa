#include<iostream>
using namespace std;
void gfg(int n){
    if(n==0) return;
    cout<<"pre " <<n<<endl;
    gfg(n-1);
     cout<<"In " <<n<<endl;
    gfg(n-1);
    cout<<"post " <<n<<endl;
}
int main(){
    cout<<endl;
    gfg(3);
    cout<<endl;
}