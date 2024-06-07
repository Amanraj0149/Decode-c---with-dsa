#include<iostream>
#include<vector>
using namespace std;
int main(){
    int m,n;
    cout<<"enter the row";
    cin>>m;
    cout<<"enter the column";
    cin>>n;
    int arr[m][n];
     for(int i=0;i<m;i++){
        for(int j=0;j<n;j++){
            cin>>arr[i][j];
        }
     }
         int max=-1;
    for(int i=0;i<m;i++){
        for(int j=0;j<n;j++){
            if(max<arr[i][j]){
                max=arr[i][j];
            }
        }
    }
    cout<<"the maximum number is :"<<max;
}