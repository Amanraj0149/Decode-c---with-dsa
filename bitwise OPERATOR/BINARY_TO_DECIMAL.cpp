#include<iostream>
#include<string>
using namespace std;

int bin_to_dec(string &binary){
    int n=binary.size();
int result =0;
for(int i=n-1;i>=0;i--){
 char ch = binary[i];
 int num = ch -'0';
 result = result+ num*(1 << (n-i-1));
}
return result;
}


int main(){
string s ="001011";
cout<<bin_to_dec(s)<<"\n";
}