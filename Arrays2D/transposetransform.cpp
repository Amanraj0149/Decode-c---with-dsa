#include<iostream>
#include<vector>
using namespace std;
int main(){
    int m;
    cout<<"enter the row & column";
    cin>>m;
    int arr[m][m];
     for(int i=0;i<m;i++){  //rows
        for(int j=0;j<m;j++){ // column
            cin>>arr[i][j];
        }
     }
     cout<<"\n";
    for(int i=0;i<m;i++){
        for(int j=0;j<m;j++){
            cout<<arr[i][j]<<" ";
                
            }
            cout<<endl;
        }
         cout<<"\n";
        //for transpose
         for(int i=0;i<m;i++){
        for(int j=i+1;j<m;j++){
            //swapping of i,j & j,i
            int temp = arr[i][j];
            arr[i][j]=arr[j][i];
            arr[j][i]=temp;
             }
              }
              // print 
           for(int i=0;i<m;i++){
        for(int j=0;j<m;j++){
            cout<<arr[i][j]<<" ";
                
            }
            cout<<endl;
        }
        
        }
   