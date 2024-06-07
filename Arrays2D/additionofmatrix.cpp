#include<iostream>
#include<vector>
using namespace std;
int main(){
    int m,n;
    cout<<"enter the row";
    cin>>m;
    cout<<"enter the column";
    cin>>n;
    int arr[2][3] ={{1,2,3},{4,5,6}};
    int brr[2][3]={{7,8,9},{10,11,12}};
    int res[2][3];
     for(int i=0;i<m;i++){
        for(int j=0;j<n;j++){
            res[i][j]=arr[i][j]+brr[i][j];
        }
     }
    for(int i=0;i<m;i++){
        for(int j=0;j<n;j++){
            cout<<res[i][j]<<" ";
                
            }
            cout<<endl;
        }
         
    }
   