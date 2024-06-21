#include<iostream>
#include<unordered_map>
using namespace std;

int main(){
   unordered_map<string,int> m;
     pair<string,int>p1;
     p1.first="aman";
     p1.second=76;
      pair<string,int>p2;
    //  p2.first="harsh";
    //  p2.second=77;
    //   pair<string,int>p3;
    //  p3.first="vijay";
    //  p3.second=2;
    //   pair<string,int>p4;
    //  p4.first="rizz";
    //  p4.second=1;
    m.insert(p1);
    //   m.insert(p2);
    //    m.insert(p3);
    //     m.insert(p4);
   m["harsh"]=15;
   m["lokesh"]=67;
     
        for(auto p :m){
            cout<<p.first<<" "<<p.second<<endl;
        }
        cout<<m.size()<<endl;
        m.erase("lokesh");
        cout<<m.size()<<endl;
          for(auto p :m){
            cout<<p.first<<" "<<p.second<<endl;
        }
}