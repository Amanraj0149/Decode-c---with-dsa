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
    cout<<endl;

    for(int j=0;j<n;j++){   // column printing phele niche fir uppeer phir niche(dow(0,0))
        if(j%2==0){            
        for(int i=0;i<m;i++){  
            cout<<a[i][j]<<" "; 
        }
        }
        else {// i=1,3,5 
        for(int i=m-1;i>=0;i--){
            cout<<a[i][j]<<" ";
        }

        }
        cout<<endl;
    }


} 