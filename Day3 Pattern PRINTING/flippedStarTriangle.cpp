#include<iostream>
using namespace std;
int main(){
    int n;
    cout<<"enter the value of rows:";
    cin>>n;
    //code of inevretd or star triangle reverse
    //n0 of star =n+1-i
    for(int i=1;i<=n;i++){
        for(int j=1;j<=n-i;j++){
       cout<<" ";
        }
        //stars
        for(int k=1;k<=i;k++){
              cout<<"*";

        }
   cout<<endl;
    }
    
    }