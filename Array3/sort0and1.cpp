#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;
int main(){
vector<int> v;
v.push_back(0);
v.push_back(1);
v.push_back(0);
v.push_back(1);
v.push_back(0);
v.push_back(1);
v.push_back(0);
v.push_back(1);

for(int i=0;i<v.size()-1;i++){
    cout<<v[i]<<" ";
    
}
cout<<endl;
sort(v.begin(),v.end());
for(int i=0;i<v.size()-1;i++){
cout<<v[i]<<" ";
}

cout<<endl;
}