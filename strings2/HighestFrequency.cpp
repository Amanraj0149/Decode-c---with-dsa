#include<iostream>
#include<string>
#include<vector>
using namespace std;
int main(){

  string s="leetcode";
  vector<int> arr(26,0);
   // array mai o bhar diye phele

  //fir jo character repeate hua ++ kareke 0 se 1 ya 2 ya 3...
  for(int i=0;i<s.size();i++){
    char ch=s[i];
    int ascii=(int)ch;  //a =97,b=98,... for index i=0;
    arr[ascii-97]++;  // ascii(l=128) to index value hoga ascii -97=11
  }
  
   // max value nikale hai
   int mx=0;
   for(int i=0;i<26;i++){
   if(arr[i]>mx) mx=arr[i];
   }

 // maximum frequent character nikale hai
   for(int i=0;i<26;i++){
    if(arr[i]==mx){
        int ascii=i+97;
        char ch=(char)ascii;
        cout<<ch<<" "<<mx<<endl;
    }
   }
  }

