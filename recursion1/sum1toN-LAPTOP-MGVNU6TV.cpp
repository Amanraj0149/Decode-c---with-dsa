#include<iostream>
using namespace std;
        //method1
//  void sum1toN(int sum,int n){
//  if(n==0) {
//  cout<<sum<<endl;
//  return;
//  }
//  sum1toN(sum+n,n-1);
//  }
// int main(){
//  sum1toN(0,4);

// }

   //   method2
   int sum1toN(int n){
    if(n==0) return 0;
    return n+ sum1toN(n-1);
   }
   int main(){
   cout<<sum1toN(10);
   }