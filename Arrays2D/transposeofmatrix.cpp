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
     for(int i=0;i<m;i++){  //rows
        for(int j=0;j<n;j++){ // column
            cin>>arr[i][j];
        }
     }
     cout<<"\n";
    for(int i=0;i<m;i++){
        for(int j=0;j<n;j++){
            cout<<arr[i][j]<<" ";
                
            }
            cout<<endl;
        }
         cout<<"\n";
        //for transpose
        for(int j=0;j<n;j++) {
            for(int i=0;i<m;i++){
                cout<<arr[i][j]<<" ";
            }
            cout<<endl;
        }
        cout<<endl;
    }
   