#include<iostream>
using namespace std;
int fibo(int n){
    //base case
    if(n==1) return 1;
    if(n==2) return 2;
  return fibo(n-1)+ fibo(n-2);
}

int main(){
    // 1,2,3,5,8,13,21,34,55,89
    cout<<fibo(6);
}