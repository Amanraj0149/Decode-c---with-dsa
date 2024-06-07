#include<iostream>
#include<string>
using namespace std;

string dec_to_binary(int num){
    string result=" ";
    while(num>0){
        //even
        if(num%2==0){
       result= "0"+ result;     
        }
        // odd
        else{
         result= "1"+ result;      
        }
        num =num/2;
    }
    return result;
}


int main(){
cout<< dec_to_binary(2)<<"\n";
return 0;
}