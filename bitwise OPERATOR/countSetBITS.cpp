#include<iostream>
#include<string>
using namespace std;


int count_set_bits(int n){
    return __builtin_popcount(n); // inbuilt function to count set bits or one in a binary number
}

int countsetbits(int n){
    int count =0;
    while(n>0){
        count++;
        n=(n & (n-1));
    }
 return count;
}


int main(){
    cout<<count_set_bits(13)<<endl;
 cout<<countsetbits(13);
}