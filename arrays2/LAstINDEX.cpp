#include<iostream>
#include<vector>
using namespace std;
int main(){
    vector<int> v;
    v.push_back(9);
      v.push_back(10);
        v.push_back(6);
          v.push_back(12);
           v.push_back(11);
      v.push_back(6);
        v.push_back(0);
        // 7 element -> size =7;0-6
        int x=6;
        int idx =-1;
        for(int i=0;i<v.size()-1;i++){
            if(v[i]==x) {
                idx = i;
                break;

             }
        }
           cout<<idx;
         
}