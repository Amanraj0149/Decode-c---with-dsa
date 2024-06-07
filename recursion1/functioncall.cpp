#include<iostream>
using namespace std;
void greet(){
    cout<<"good morning"<<endl;
    cout<<"how are you"<<endl;
}
int product (int a, int b){
    return a*b;
}
int main(){
    // int x=product(2,4);
    // cout<<x;
    // greet();
    // //
    // //
    // greet();
    int a=6;
    int b=8;
    cout<<a<<" "<<b<<endl;
    swap(a,b);
    cout<<a<<" "<<b<<endl;
    cout<<max(a,b);

}