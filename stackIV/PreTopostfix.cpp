#include<iostream>
#include<stack>
using namespace std;

string solve(string val1, string val2, char ch){
      //pre to in 
      //infix: v1 op v2
      string s="";
      s+=val1;
      s+=val2;
      s.push_back(ch);
      return s;
}


int main(){
    string s = "-/*+79483"; //post fix
    stack<string> val;
    for(int i = s.length()-1; i>=0; i--){
        if(s[i] >= '0' && s[i] <= '9'){
            val.push(to_string(s[i]-'0'));
        }
        else { //s[i] it is -> *,/,+,-
        // kaam
         string val1=val.top();
        val.pop();
         string val2=val.top();
        val.pop();
        string ans=solve(val1,val2,s[i]);
         val.push(ans);
        }
    }
   
    cout << "Result: " << val.top() << endl;
    return 0;
}