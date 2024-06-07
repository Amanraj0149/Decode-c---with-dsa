#include<iostream>
#include<string>
#include<algorithm>
using namespace std;
int main(){
   string s;
   getline(cin,s);
   sort(s.begin(),s.end()); // sort karega acccording to ascii value, na ki alphabetical order mai
   cout<<s;
   
  

}