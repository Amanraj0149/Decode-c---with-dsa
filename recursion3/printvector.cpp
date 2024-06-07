#include<iostream>
#include<vector>
using namespace std;
void display2(vector<int>& v,int idx){
   if(idx==v.size()) return;
   cout<<v[idx]<<" ";
   display2(v,idx+1);
}
int main(){
int arr[]={2,9,7,8,9,2};
int n=sizeof(arr)/sizeof(arr[0]);
vector<int> v(n);
for(int i=0;i<n;i++){
    v[i]=arr[i];
}
display2(v,0);
}