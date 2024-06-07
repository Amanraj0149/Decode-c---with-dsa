#include<iostream>
#include<vector>
using namespace std;
int main(){
    
   // vector<int> v1(5,2);
   //int arr[3][4];
   vector< vector<int> >v(3,vector<int> (4,2)); // yaha 3-> row hai & 4-> column hai aur 2 initialize value hai
   cout<<v.size()<<endl;//row print hoga
   cout<<v[0].size();   //column print hoga
   cout<<endl;

   for(int i=0;i<3;i++){
    for(int j=0;j<4;j++){
        cout<<v[i][j]<<" ";
    }
    cout<<endl;
   }
    

}