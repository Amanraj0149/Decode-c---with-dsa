#include<iostream>
#include<string>
#include<algorithm>
using namespace std;
int main(){
    string s;
    getline(cin,s);
    // reverse
    int len=s.size();
    reverse(s.begin(),s.begin()+len/2);
    cout<<s<<endl;
    
}