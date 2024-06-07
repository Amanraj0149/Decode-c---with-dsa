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
    int arr[m][n];
    for(int i=0;i<m;i++){
        for(int j=0;j<n;j++){
            cin>>arr[i][j];
        }
    }
    cout<<endl;
    //spiral
    int minr=0,minc=0;
    int maxr =m-1, maxc=n-1;
    while(minr<=maxr && minc<=maxc){
        //right
        for(int j=minc;j<=maxc;j++){
            cout<<arr[minr][j]<<" ";
        }
        minr++;
        if(minr>maxr || minc>maxc) break; // agar ye condition nhi lage to desire se aage bbhi print kardega jaise last mai ..  6 7 6
        //down
        for(int i=minr;i<=maxr;i++){
            cout<<arr[i][maxc]<<" ";
        }
        maxc--;
        if(minr>maxr || minc>maxc) break;
        //left
        for(int j=maxc;j>=minc;j--){
             cout<<arr[maxr][j]<<" ";
        }
        maxr--;
        if(minr>maxr || minc>maxc) break;
        //up
        for(int i=maxr;i>=minr;i--){
            cout<<arr[i][minc]<<" ";
        }
        minc++;
    }
 //input 1 2 3 4 5 6 7 8 9   
//output 1 2 3 6 9 8 7 4 5

} 