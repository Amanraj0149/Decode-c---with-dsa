#include<iostream>
#include<vector>
using namespace std;
int main(){
    int m;
    cout<<"enter row number";
    cin>>m;
     int n;
    cout<<"enter col number";
    cin>>n;
    int a[m][n];
    for(int i=0;i<m;i++){
        for(int j=0;j<n;j++){
            cin>>a[i][j];
        }
    }
    for(int i=0;i<m;i++){
        if(i%2==0){
        for(int j=0;j<n;j++){
            cout<<a[i][j]<<" ";
        }
        }
        else {// i=1,3,5
        for(int j=n-1;j>=0;j--){
            cout<<a[i][j]<<" ";
        }

        }
        cout<<endl;
    }


}