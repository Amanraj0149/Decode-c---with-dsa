#include<iostream>
using namespace std;
int power(int a ,int b){ //method 1
    int p=1;
    if(a==0 || b==0){
        cout<<"a raised to power b is not define";
    }
    for (int i =1; i<=b; i++)
    {
    p*=a;
    }
    return p;
}

int pow(int a ,int b){
    if(b==0) return 1;
    return a*pow(a,b-1);
}


int main(){
int a;
cout<<"enter the base value";
cin>>a;
int b;
cout<<"enter the exponent value";
cin>>b;
cout<<"a raised to power b is "<<pow(a,b);
}