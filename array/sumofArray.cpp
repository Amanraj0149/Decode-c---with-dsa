#include<iostream>
using namespace std;
int main(){
     
    int arr[7];
    cout<<"enter the elemnets :";
     for(int i=0;i<=6;i++){
  cin>>arr[i];
    }
    int sum=0;
    for(int i=0;i<=6;i++){
        sum =sum + arr[i];
  
    }
     cout<<sum;
   
}
