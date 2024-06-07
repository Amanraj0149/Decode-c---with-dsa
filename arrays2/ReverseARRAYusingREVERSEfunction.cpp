#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;
void display(vector<int> &a){
    for(int i=0;i<a.size();i++){
    cout<<a[i]<<" ";
    }
}
// void display(vector<int> &a){
//      int i=0;
//      int j=a.size()-1;
//      while ( i<=j)
//      {
//         int temp =v[i];
//         v[i] = v[j];
//         v[j] =temp;
//      }
     
// }
int main(){
    vector<int> v;
    v.push_back(1);
    v.push_back(6);
    v.push_back(2);
    v.push_back(3);
    v.push_back(7);
    v.push_back(4);
    display(v);
    
    reverse(v.begin(),v.end());
      display(v);
}