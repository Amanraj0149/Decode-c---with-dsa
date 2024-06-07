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
         int sum=0;;
    for(int i=0;i<m;i++){
        for(int j=0;j<n;j++){
            sum+= arr[i][j];
                
            }
        }
         cout<<"the sum is :"<<sum;
    }
   