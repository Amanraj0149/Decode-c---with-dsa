#include<iostream>
using namespace std;
int main(){
    int arr[6];
    cout<<"enter the elements :";
     for(int i=0;i<=5;i++){
  cin>>arr[i];
    }
    for(int i=0;i<=5;i++){
        if(arr[i]<35){
            cout<<i<<" ";
        }
   
    }
   
}