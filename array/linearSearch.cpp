#include<iostream>
using namespace std;
int main(){
    int n;
     cout<<"enter the value of n :";
    cin>>n;
     int arr[n];
      
     for(int i=0;i<=n-1;i++){
     cin>>arr[i];
    }
    
    int x;
     cout<<"enter the element want to search :";
    cin>>x;
    for(int i=0;i<=n-1;i++){
        if(arr[i]==x) cout<<"present";
   else cout<<"absent";
    break;
    }
      
}