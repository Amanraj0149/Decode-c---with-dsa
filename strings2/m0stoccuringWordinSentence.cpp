#include<iostream>
#include<sstream>
#include<string>
#include<vector>
#include<algorithm>
using namespace std;
int main(){
   string str="raghav is a math teacher. he is a DSA mentor as well";
   stringstream ss(str);
   string temp;
   vector<string> v;
   while(ss>>temp){ // ss se input lega temp;
    v.push_back(temp);
   }
    for(int i=0;i<v.size();i++){
        cout<<v[i]<<endl;
    }  
    cout<<endl;

    sort(v.begin(),v.end()); 
    //after sorting same word agal bagal mai ajayega fir index 1 se check karke count badha denge
    int maxcount=1;
    int count=1;
    for(int i=1;i<v.size();i++){
     if(v[i]==v[i-1]) count++;
     else count = 1;
     maxcount = max(maxcount,count);
    }
    cout<<maxcount<<endl; // 2 ayega

// printing most repeated word
     for(int i=1;i<v.size();i++){
     if(v[i]==v[i-1]) count++;
     else count = 1;
     if(count==maxcount){
        cout<<v[i]<<" "<<endl;
     }
    }
   }
