#include<iostream>
#include<algorithm>
using namespace std;
int main(){
    int arr[]={5,0,1,2,0,0,4,0,3};
    int n=9;
    for(int i=0;i<n;i++){
        cout<<arr[i]<<" ";
    }
   // bubble sort
    for(int i=0;i<n-1;i++){ // n-1 pass
    //traverse
    for(int j=0;j<n-1-i;j++){
        if(arr[j]==0){
            // int temp=arr[j];
            // arr[j]=arr[j+1];
            // arr[j+1]=temp;
            swap(arr[j],arr[j+1]);
        }
    }
    }
    cout<<endl;
    for(int i=0;i<n;i++){
        cout<<arr[i]<<" "; // 5 1 2 4 3 0 0 0 0 
    }
}
     // QUESTION //
//push Zeroes to end while maintaing the relative order of other elements
//arr[]={5,0,1,2,0,0,4,0,3};
//O/P= {5 1 2 4 3 0 0 0 0 };