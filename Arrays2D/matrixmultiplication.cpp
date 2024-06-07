#include<iostream>
#include<vector>
using namespace std;
int main(){
  int m;
  cout<<"eneter row of 1st matrix";
  cin>>m;
  int n;
  cout<<"eneter col of 1st matrix";
  cin>>n;
  int p;
  cout<<"eneter row of 1st matrix";
  cin>>p;
   int q;
  cout<<"eneter col of 1st matrix";
  cin>>q;
  if(n==p){
        int a[m][n];
        int b[p][q];
        cout<<"enter elements of first matrix: ";
        for(int i=0;i<m;i++){
            for(int j=0;j<n;j++){
                cin>>a[i][j];
            }
        }
        cout<<"enter elements of second matrix: ";
        for(int i=0;i<p;i++){
            for(int j=0;j<q;j++){
                cin>>b[i][j];
            }
        }
        // resultant matrix
        int res[m][q];
        for(int i=0;i<m;i++){
        for(int j=0;j<q;j++){
            res[i][j]=0;
            //multiply res[i][j]= a[i][0]*b[0][j]+ a[i][1]*b[1][j]+
             for(int k=0;k<p;k++){
              res[i][j]+=a[i][k]*b[k][j];
             }

        }
        }
        cout<<endl;
        // print 
        for(int i=0;i<m;i++){
        for(int j=0;j<q;j++){
           cout<<res[i][j]<<" ";
             }
          cout<<endl;
        }
        }

  

 else{
    //n!=p
    cout<<"the matrices cannot be multiplied"; 
 }

}