#include<iostream>
#include<limits>
using namespace std;
int main(){
    int arr[]={5,3,1,4,2};
    int n=5;
    for(int ele : arr){
          cout<<ele<<" ";
    }
  cout<<endl;
  //SELECTION short
   for(int i=0;i<n-1;i++){
    int min = INT16_MAX;
    int mindx= -1;
    // minimum element calculation in orange box
    for(int j=i;j<n;j++){
       if(arr[j]<min){
       min= arr[j];
       mindx =j;
       }
    }
    //orange index box mai swapping karna hai
    swap(arr[i],arr[mindx]);
   }
   for(int ele : arr){
          cout<<ele<<" ";
    }
}