#include<iostream>
#include<sstream>
#include<string>
#include<algorithm>
using namespace std;
int main(){
   string str="raghav is    a math teacher";
  stringstream ss(str);
  string temp;

  while(ss>>temp){ // ss >> mai se input lelo temp mai
    cout<<temp<<endl;
  }
   
}