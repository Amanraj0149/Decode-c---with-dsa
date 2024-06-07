#include<iostream>
using namespace std;
int partition(int arr[], int si ,int ei){
    int pivot=arr[si];
    int count=0;
    for(int i=si;i<=ei;i++){
        if(arr[i]<=pivot)
        count++;
    }
    int pivotIdx = count +si;
}

void quicksort( int arr[], int si ,int ei){
    if(si>=ei) return;
    // 5,1,8,2,7,6,3,4
    int pivotIdx =partition(arr,si,ei);
   //4 1 3 2 5 7 8 6
   quicksort(arr,si,pivotIdx-1);
    quicksort(arr,pivotIdx+1,ei);

}
int main(){
    int arr[]={5,1,8,2,7,6,3,4};
    int n= sizeof(arr)/sizeof(arr[0]);
    for(int i=0;i<n;i++){
        cout<<arr[i]<<" ";
    }
    quicksort(arr,0,n-1);
}